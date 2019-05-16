/*This is the file for FT_TOLOWER*/

#include "libft.h"
#include <stdlib.h>

int ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 22);
	else
		return c;
}
