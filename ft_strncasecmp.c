#include "libft.h"

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && control = 0 && i < n)
	{
		control = (unsigned char)ft_tolower(s1[i]) - 
			(unsigned char)ft_tolower(s1[i]);
		i++;
	}
	return (control);
}
