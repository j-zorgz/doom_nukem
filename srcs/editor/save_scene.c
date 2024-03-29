#include <editor.h>
#include <file_format.h>

void		fill_sectors(t_data *data, uint8_t *addr, uint16_t *hash_map_edges, int16_t *hash_map_textures)
{
	struct s_ffsector	*current_sec;
	uint16_t		*current_wall;
	uint32_t		i;
	uint32_t		current_id;
	int				wall_i; // (LOL)

	i = 0;
	current_id = 0;
	current_sec = (struct s_ffsector*)(addr + sizeof(struct s_ffheader));
	while (i < data->max_element_id)
	{
		if (data->elements[i].enabled)
		{
			current_sec->id = current_id;
			current_sec->walls_number = data->elements[i].polygon.nb_points;
			current_sec->normal_floor = calculate_normale_with_angles(data->elements[i].angle_floor.x, data->elements[i].angle_floor.y);
			current_sec->height_floor = data->elements[i].height_floor;
			
			current_sec->texture_floor = hash_map_textures[data->elements[i].texture_floor];

			current_sec->normal_ceiling = calculate_normale_with_angles(data->elements[i].angle_ceiling.x, data->elements[i].angle_ceiling.y);
			current_sec->height_ceiling = data->elements[i].height_ceiling;
			current_sec->texture_ceiling = hash_map_textures[data->elements[i].texture_ceiling];

			current_sec->ambient_light = data->elements[i].light;

			current_wall = (void*)current_sec + sizeof(struct s_ffsector);
			wall_i = 0;
			while (wall_i < data->elements[i].polygon.nb_points)
			{
				*current_wall = hash_map_edges[data->elements[i].polygon.edges[wall_i] - data->edges];
				current_wall++;
				wall_i++;
			}
			current_sec = (void*)current_wall;
			current_id++;
		}
		i++;
	}
}

void	fill_walls(t_data *data, uint8_t *walls_addr, uint16_t *hash_map_edges, uint16_t *hash_map_points, int16_t *hash_map_textures)
{
	struct s_ffwall	*current_wall;
	uint16_t		i;

	current_wall = (struct s_ffwall*)walls_addr;
	i = 0;
	while (i < data->max_edge_id)
	{
		if (data->edges[i].used)
		{
			current_wall->id = hash_map_edges[i];
			current_wall->p1 = hash_map_points[data->edges[i].p1 - data->points];
			current_wall->p2 = hash_map_points[data->edges[i].p2 - data->points];
			printf("wall[%d] : %d - %d\n", current_wall->id, current_wall->p1, current_wall->p2);
			if (data->edges[i].type == SOLID)
			{
				current_wall->texture = data->edges[i].texture_wall;
				current_wall->next_sector_1 = -1;
				current_wall->next_sector_2 = -1;
			}
			else if (data->edges[i].type == PORTAL)
			{
				current_wall->texture_up = hash_map_textures[data->edges[i].texture_up];
				current_wall->texture_down = hash_map_textures[data->edges[i].texture_down];
				find_next_sectors(data, current_wall, &data->edges[i]);
				printf("Wall[%d] : \n", i);
				printf("next_sector_1 : %d, next_sector_2 : %d\n", current_wall->next_sector_1, current_wall->next_sector_2);
			}
			else
			{
				printf("WTF 69\n");
			}
			current_wall++;
		}
		i++;
	}
}

void	fill_header(t_data *data, uint8_t *addr, int16_t *hash_map_textures, uint32_t file_size)
{
	struct s_ffheader	*header;

	header = (struct s_ffheader*)addr;
	header->magic = DOOM_MAGIC;
	header->file_size = file_size;
	header->size = (t_ivec2){DRAWING_ZONE_WIDTH, DRAWING_ZONE_HEIGHT};

	header->player_pos = (t_vec2){331, 674};
	// header->player_pos = (t_vec2){DRAWING_ZONE_WIDTH / 2, DRAWING_ZONE_HEIGHT / 2}; // TODO

	header->points_number = calculate_nb_points(data);
	header->sectors_number = calculate_nb_sectors(data);
	header->walls_number = calculate_nb_edges(data);
	header->texture_number = calculate_nb_textures(data, hash_map_textures);

	header->sprites_number = 0; // TODO
	header->objects_number = 0; // TODO

	header->offset_points = sizeof(struct s_ffheader) + calculate_size_sectors(data);
	header->offset_walls = header->offset_points + calculate_size_points(data);
	header->offset_texture = header->offset_walls + calculate_nb_edges(data) * sizeof(struct s_ffwall);
	header->offset_audio = header->offset_texture + calculate_size_textures(data, hash_map_textures);
	header->offset_objects = header->offset_audio + calculate_size_audios(data);
}

void	fill_textures(t_data *data, uint8_t *addr, int16_t *hash_map_textures)
{
	uint16_t			i;
	uint16_t			current_in_file;
	struct s_fftexture	*t;

	i = IMG_START_TEXTURES;
	current_in_file = 0;
	t = (struct s_fftexture*)addr;
	while (i < data->nbr_textures + IMG_START_TEXTURES)
	{
		if (hash_map_textures[i] == current_in_file)
		{
			printf("Filling texture %d\n", current_in_file);
			t->id = current_in_file;
			t->size = (t_vec2){data->imgs[i].original_h, data->imgs[i].original_w};

			ft_memcpy((uint8_t*)t + sizeof(struct s_fftexture), data->imgs[i].original, data->imgs[i].original_h * data->imgs[i].original_w * 4);

			t = (struct s_fftexture*)((uint8_t*)t + sizeof(struct s_fftexture) + data->imgs[i].original_h * data->imgs[i].original_w * 4);
			current_in_file++;
			i = IMG_START_TEXTURES - 1;
		}
		i++;
	}
}

void		fill_points(t_data *data, uint8_t *addr)
{
	int				i;
	struct s_ivec2	*point;
	int				j;

	i = 0;
	j = 0;

	point = (struct s_ivec2*)addr;
	while (i < data->max_point_id)
	{
		if (data->used_point[i])
		{
			*point = data->points[i];
			printf("point[%d] : (%d, %d)\n", j, point->x, point->y);
			point++;
			j++;
		}
		i++;
	}
}

uint8_t		save_scene(t_data *data)
{
	int				fd;
	uint8_t			*addr;
	size_t			file_size;
	struct s_ffheader	*header;
	uint16_t		*hash_map_edges;
	uint16_t		*hash_map_points;
	int16_t			*hash_map_textures;

	if (!(hash_map_edges = fill_hash_map_edges(data)))
		return (0);
	if (!(hash_map_points = fill_hash_map_points(data)))
	{
		free(hash_map_edges);
		return (0);
	}
	if (!(hash_map_textures = fill_hash_map_textures(data)))
	{
		free(hash_map_edges);
		free(hash_map_points);
		return (0);
	}
	if ((fd = open(data->scene_name, O_WRONLY | O_TRUNC | O_CREAT, 0644)) == -1)
	{
		ft_putendl_fd("Error : Couldn't open scene file for writing", 2);
		free(hash_map_edges);
		free(hash_map_points);
		free(hash_map_textures);
		return (0);
	}
	file_size = calculate_file_size(data, hash_map_textures);
	printf("file size : %zu\n", file_size);
	if (!(addr = malloc(file_size)))
	{
		ft_putendl_fd("Memory error", 2);
		free(hash_map_edges);
		free(hash_map_points);
		free(hash_map_textures);
		return (0);
	}
	ft_bzero(addr, file_size);

	header = (struct s_ffheader*)addr;

	fill_header(data, addr, hash_map_textures, file_size);
	fill_sectors(data, addr, hash_map_edges, hash_map_textures);
	fill_points(data, addr + header->offset_points);
	printf("offset_walls : %lld\n", header->offset_walls);
	fill_walls(data, addr + header->offset_walls, hash_map_edges, hash_map_points, hash_map_textures);
	fill_textures(data, addr + header->offset_texture, hash_map_textures);

	write(fd, addr, file_size);
	exit (0);
}
