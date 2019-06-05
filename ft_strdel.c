#include "libft.h"

void	ft_strdel(char **as)
{
	if (!(as))
		return (NULL);
	else if (!(*as))
		return (NULL);
	if (as)
	{
		free(as);
		as = 0;
	}
	else if (*as)
	{
		free(*as);
		*as = 0;
	}
}
