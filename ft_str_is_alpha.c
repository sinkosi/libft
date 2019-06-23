#include "libft.h"

int	ft_str_is_alpha(char *str)
{
	size_t	i;
	int	control;

	if (str == NULL)
		return (1);
	control = 1;
	i = 0;
	while (str[i] != '\0' && control == 1)
	{
		control = (ft_isalpha(str[i]));
		i++;
	}
	return (control);
}
