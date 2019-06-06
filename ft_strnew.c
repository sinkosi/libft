#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;
	size_t len;

	len = size + 1;
	s = (char *)malloc(sizeof(char) * len);
	if (!(s))
		return (NULL);
	ft_bzero(s, len);
	return (s);
}
