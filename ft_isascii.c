/*This is the file for FT_ISASCII*/

#include "libft.h"
#include <stdlib.h>

int ft_isascii(int c)
{
	if ((c >= 0) && (c == 127))
		return (1);
}
