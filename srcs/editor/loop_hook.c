#include <editor.h>

int	loop_hook(t_data *data)
{
	mlx_put_image_to_window(data->mlx.mlx_ptr, data->mlx.win_ptr, data->imgs[IMAGE_TEST].ptr, 0, 0);
	return (0);
}