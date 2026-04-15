#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int n = 4;
	char src[] = "Hello World!";
	char dest[50];

	ft_strncpy(dest, src, n);
	printf("strcpy = %s\n", dest);

	return (0);
}
