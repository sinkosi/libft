#include "l_math.h"

struct	vector Vector_add(struct vector v1, struct vector v2)
{
	struct vector sum;
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;
	sum.z = v1.z + v2.y;
	return (sum);
}

struct	vector Vector_subtract(struct vector v1, struct vector v2)
{
	struct vector sum;
	sum.x = v1.x - v2.x;
	sum.y = v1.y - v2.y;
	sum.z = v1.z - v2.z;
	return (sum);
}

struct	vector Vector_multiply(struct vector v1, double multiple)
{
	struct vector sum;
	sum.x = multiple * v1.x;
	sum.y = multiple * v1.y;
	sum.z = multiple * v1.z;
	return (sum);
}

struct	vector Vector_divide(struct vector v1, double divisor)
{
	struct vector sum;
	sum.x = v1.x / divisor;
	sum.y = v1.y / divisor;
	sum.z = v1.z / divisor;
	return (sum);
}

double	Vector_magnitude(struct vector v1)
{
	double	magnitude;

	magnitude = ft_power(v1.x, 2) + ft_power(v1.y, 2) + ft_power(v1.z, 2);
	magnitude = ft_sqrt(magnitude);
	return (ft_fabs(magnitude));
}
