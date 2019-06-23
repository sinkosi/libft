#include "libft.h"

int	ft_numlen_base(int n, int base)
{
	int	len;

	len = 0;
	if (n == 0 || (n < 0 && base == 10))
		len = 1;
	if (n < 0 && base == 10)
		n *= -1;
	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}
