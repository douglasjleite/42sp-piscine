#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "DEVOLVE O MEU LANCHE!";
	printf("strlowcase = %s", ft_strlowcase(str));
	
	return (0);
}
