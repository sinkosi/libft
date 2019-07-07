#include "l_math.h"

double ft_cosine(int deg)
{
	double	rad;
	double	cos;
	int	i;
	
	deg = deg % 360;
	rad = deg * M_PI / 180.0;
	cos = 0.0;
	i = 0;
	while (i < 7)
	{
		cos += ft_power(-1, i) * ft_power(rad, 2 * i) /
			ft_factorial(2 * i);
		i++;
	}
	return (cos);
}
