#include <editor.h>

t_intersection	interval_intersect(uint32_t a1, uint32_t a2, uint32_t b1, uint32_t b2)
{
	uint32_t		mini;
	uint32_t		maxi;
	t_intersection	ret;

	ret.intersect = 0;
	mini = min(a1, a2);
	maxi = max(b1, b2);
	if (b1 < mini && b2 < mini)
		return (ret);
	if (b1 > maxi && b2 > maxi)
		return (ret);
	ret.intersect = 1;
	// mini = ;
	// ret.interval_intersect.x = 
	return (ret);
}

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

uint8_t	is_commun_point(t_ivec2 *a1, t_ivec2 *a2, t_ivec2 *b1, t_ivec2 *b2)
{
	return (is_equ_ivec2(a1, b1) || is_equ_ivec2(a1, b2) || is_equ_ivec2(a2, b1) || is_equ_ivec2(a2, b2));
}

t_intersection	is_intersect(t_ivec2 a1, t_ivec2 a2, t_ivec2 b1, t_ivec2 b2)
{
	float			ma; // a
	float			mb;
	float			ka; // b
	float			kb;
	float			x;
	t_intersection	ret;

	ret.intersect = 0;
	if (is_commun_point(&a1, &a2, &b1, &b2))
		return (ret);
	if (a1.x == a2.x || b1.x == b2.x)
	{
		swap(&a1.x, &a1.y);
		swap(&a2.x, &a2.y);
		swap(&b1.x, &b1.y);
		swap(&b2.x, &b2.y);
	}
	ma = ((float)a1.y - a2.y) / (a1.x - a2.x);
	mb = ((float)b1.y - b2.y) / (b1.x - b2.x);
	ka = a1.y - a1.x * ma;
	kb = b1.y - b1.x * mb;

	// printf("ma : %f\nka : %f\nmb : %f\nkb : %f\n", ma, ka, mb, kb);

	if (ma == mb)
	{
		if (ka == kb)
		{
			ret = interval_intersect(a1.x, a2.x, b1.x, b2.x);
			ret.intersection_point.y = ma * ret.intersection_point.x + ka;
			return (ret);
		}
		else
			return (ret);
	}
	x = (ka - kb) / (mb - ma);
	// printf("x = %f\n", x);
	if (x < min(a1.x, a2.x) || x > max(a1.x, a2.x)
		|| x < min(b1.x, b2.x) || x > max(b1.x, b2.x))
		return (ret);
	ret.intersect = 1;
	ret.intersection_point = (t_ivec2){x, (int)(ma * x + ka)};
	return (ret); 
}