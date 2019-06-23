#include "libft.h"

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	if (base < 2 || base > 16 || str == NULL)
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
	}
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isxdigit(str[i]) == 1)
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			n = (n * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			n = (n * base) + (str[i] - 'a' + 10);
		else
			n = (n * 10) + (str[i] - '0');
		i++;
		if ((n < -2147483648) && sign == -1)
			return (0);
		else if ((n > 2147483647) && sign == 1)
			return (-1);
	}
	return (result * sign);
}
