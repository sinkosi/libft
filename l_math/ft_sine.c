#include "l_math.h"

double	ft_sine(int deg)
{
	double	rad;
	double	sin;
	int	i;

	deg %= 360;
	rad = deg * M_PI / 180;
	sin = 0;
	i = 0;
	while (i < 7)
	{
		sin += ft_power(-1, i) * ft_power(rad, 2 * i + 1) 
			/ ft_factorial(2 * i + 1);
		i++;
	}
	return (sin);
}
