/*This is the file for FT_ISALNUM*/

#include "libft.h"
#include <stdlib.h>

int ft_isalnum(int c)
{       
        if (ft_isalpha(c) || ft_isdigit(c))
                return (1);
}
