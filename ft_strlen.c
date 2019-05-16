#include <string.h>
#include "libft.h"

size_t ft_strlen(const char *c)
{
	size_t num = 0;
	while(c != '\0')
		num++;

	return num;
}
