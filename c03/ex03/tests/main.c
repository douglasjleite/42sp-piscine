#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[] = "World!";
	unsigned int	nb = 4;

	ft_strncat(dest, src, nb);
	printf("strcat = %s\n", dest);

	return (0);
}
