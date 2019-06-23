#include "libft.h"

int	ft_iterative_factorial(int nbr)
{
	int i;
	
	i = nbr;
	if (nbr < 1)
		return (0);
	while (i > 0 && ft_isimax(nbr) == 0)
	{
		nbr *= i;
		i--;
	}
	if (ft_isimax(nbr) == 1)
		return (0);
	return (nbr);
}
