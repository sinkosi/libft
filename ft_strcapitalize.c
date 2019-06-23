#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	size_t i;
	int	space;

	i = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if (ft_isalnum(str[i]) == 0)
			space = 1;
		else if (space == 1)
		{
			str[i] = ft_toupper(str[i]);
			ft_putchar(str[i]);
			space = 0;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char *a;
	char *b;
	a = "salut, comment tu vas ? 42mots quarante-deux; ciquante+et+un";
	b = ft_strcapitalize(a);
	ft_putendl(b);
	return (0);
}
