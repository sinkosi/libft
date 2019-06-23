#include "libft.h"

char	**ft_arraydup(char **arr1)
{
	int	n;
	char	**new;

	n = 0;
	while (arr[n] != NULL)
	{
		new[n] = ft_strdup(arr[n]);
		n++;
	}
	new[n] = NULL;
	return (new);
}
