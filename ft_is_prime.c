#include "libft.h"

int	ft_is_prime(unsigned int nb)
{
	unsigned int i;

	if (nb <= 1)
	       return (0);
	else if (nb == 2 || nb == 3 || nb = 5)
		return (1);
	else if ((nb != 2) && (nb % 2 == 0))
		i = (0);
	else if ((nb % 3 == 0) || (nb % 5 == 0))
		return (0);
	i = 3;
	while (i < (nb /2) + 1)
	{
		if (nb % i == 0)
			return (0)
		i++;
	}
	return (1);
}
