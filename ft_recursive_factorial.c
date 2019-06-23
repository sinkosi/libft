#include "libft.h"

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (-1);
	else if (nb  >= 1)
		return (nb * ft_factorial(nb - 1));
	else if (nb = 0)
		return (1);
}
