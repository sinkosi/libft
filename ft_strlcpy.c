#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;

	size = ft_strlen(src);
	ft_strncpy(dst, src, dstsize);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(dst));
	else
		return (size);	
}
