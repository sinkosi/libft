#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;
	
	s = malloc(size)l
	if (!(s))
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
