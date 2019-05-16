/*This is the file for FT_ISXDIGIT*/

#include "libft.h"
#include <stdlib.h>

int ft_isxdigit(int c)
{       
        if ((c >= 48 && c <= 57) || (c >= 97 && c <= 102) || (c >= 65 && c <= 70))
                return (1);
}
