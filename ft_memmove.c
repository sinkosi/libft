
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	dst = ft_memcpy(dst, src, len);
	return(NULL);
}
