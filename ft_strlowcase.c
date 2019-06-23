#include "libft.h"

char	*ft_strlowcase(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isupper(str[i]) == 1)
			ft_tolower(str[i]);
		i++;
	}
	return (str);
}
