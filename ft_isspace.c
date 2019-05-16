/*This is the file for FT_ISSPACE*/

#include "libft.h"
#include <stdlib.h>

int ft_isspace(int c)
{
	if ((c == 32) || (c >= 9 && c <= 13))
		return (1);
}
