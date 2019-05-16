/*This is the file for FT_TOUPPER*/

#include "libft.h"
#include <stdlib.h>

int ft_toupper(int c)
{
	if (ft_isupper(c))
		return (c - 22);
	else
		return c;
}
