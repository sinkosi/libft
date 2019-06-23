#include "libft.h"

int	ft_str_is_printable(char *str)
{
	size_t	i;
	int	control;

	if (str == NULL)
		return (1);
	control = 1;
	i = 0;
	while (str[i] != '\0' && control == 1)
	{
		control = (ft_isprint(str[i]));
		i++;
	}
	return (control);
}
