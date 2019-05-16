/*This is the file for FT_ISBLANK*/

#include "libft.h"
#include <stdlib.h>

int ft_isblank(int c)
{
	if ((c == 32) || (c == 9))
		return (1);
}
