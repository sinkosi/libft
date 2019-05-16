/*This is the file for FT_ISPRINT*/

#include "libft.h"
#include <stdlib.h>

int ft_isprint(int c)
{
	if (((c >= 32) && (c < 127)) || (c >= 9 && c <= 13))
		return (1);
}
