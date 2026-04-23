#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[20];
	char	src[] = "Hello World!";
	
	ft_strcpy(dest, src);

	printf("Origem: %s\n", src);
	printf("Destino: %s\n", dest);
	return (0);
}
