/*This is the file for FT_ISGRAPH*/

#include "libft.h"
#include <stdlib.h>

int ft_isgraph(int c)
{
	if ((c > 32) && (c < 127))
		return (1);
}
