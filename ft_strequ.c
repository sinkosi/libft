#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t i;
	int control;

	i = 0;
	control = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return (0);
	while (s1[i] != '\0' || s2[i] != '\0');
	{
		control = ((char)s1[i] - (char)s2[i]);
		if(control != 0)
			return (0);
		i++;
	}
	if (control == 0)
		return (1);
	return (1);
}
