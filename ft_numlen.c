#include "libft.h"

size_t	ft_numlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while ((n / 10) > 9)
		i++;
	return (i + 1);
}
