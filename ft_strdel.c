#include "libft.h"

void	ft_strdel(char **as)
{
	if (!(as))
		return;
	else if (!(*as))
		return;
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
	free(*as);
}
