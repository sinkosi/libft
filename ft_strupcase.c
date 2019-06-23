#include "libft.h"

char	*ft_strupcase(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_islower(str[i]) == 1)
			ft_toupper(str[i]);
		i++;
	}
	return (str);
}
