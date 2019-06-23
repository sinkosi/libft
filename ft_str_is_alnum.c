#include "libft.h"

int	ft_str_is_alnum(char *str)
{
	size_t	i;
	int	control;

	if (str == NULL)
		return (1);
	control = 1;
	i = 0;
	while (str[i] != '\0' && control == 1)
	{
		control = (ft_isalnum(str[i]));
		i++;
	}
	return (control);
}
