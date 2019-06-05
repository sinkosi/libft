#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t i;
	size_t j;
	char *a;

	i = ft_strlen(s);
	a = ft_strnew(i + 1);
	while (j <= ft_strlen(s))
	{
		a[j] = s[i];
		j++;
	}
	a[j + 1] = '\0';
	return (a);
}
