#include "libft.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && control = 0)
	{
		control = (unsigned char)ft_tolower(s1[i]) - 
			(unsigned char)ft_tolower(s1[i]);
		i++;
	}
	return (control);
}
