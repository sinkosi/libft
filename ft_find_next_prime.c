#include "libft.h"

int	ft_find_next_prime(int nb)
{
	int pos;

	pos = 0;
	if (nb <= 1)
		return (0);
	while (pos == 0)
	{
		pos = ft_is_prime(nb);
		nb++;
	}
	return (nb);
}
