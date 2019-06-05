#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!(ap))
		return (NULL);
	else if (!(*ap))
		return (NULL);
	else if (ap)
		free(ap);
	else if (*ap)
		free(*ap);
	ap = 0;
	*ap = 0;
}
