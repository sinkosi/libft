#include "libft.h"

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (-1);
	else if (power == 0)
		return (1);
	while (power > 1 && (ft_isimax(nb) == 0))
	{
		nb *= nb;
		power--;
	}
	return (nb);
}
