#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t i;
	size_t j;
	char *a;

	i = ft_strlen(s);
	a = ft_strnew(i + 1);
	j = 0;
	while (j < ft_strlen(s))
	{
		a[j] = s[i - 1];
		j++;
		i--;
	}
	a[j] = '\0';
	return (a);
}
