#include "libft.h"

void	ft_putnbr_base(int n, int base)
{
	char	a;
	char	*str;
	int	i;

	str = "0123456789ABCDEF";
	i = 0;
	if (n <= -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n >= 2147483647)
	{
		ft_putstr("2147483647");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= base)
		ft_putnbr(n / base);
	i = (n % base);
	a = str[i];
	ft_putchar(a);
}
