#include "libft.h"

void	ft_strclr(char *str)
{
	size_t	i;

	i = ft_strlen(str);
	if(i > 0)
		ft_bzero(s, i);
}
