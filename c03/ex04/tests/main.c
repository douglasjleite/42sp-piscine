#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "Hello world!";
	char to_find[] = "world";
	
	printf("strstr = %s\n", ft_strstr(str, to_find));

	return (0);
}
