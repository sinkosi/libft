/*This is the file for FT_ISALPHA*/

#include "libft.h"
#include <stdlib.h>

int ft_isalpha(int c)
{       
        if (ft_isupper(c) || ft_islower(c))
                return (1);
}
