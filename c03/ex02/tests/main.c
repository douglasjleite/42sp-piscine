#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[20] = "Hello ";
	char src[] = "World!";
	
	ft_strcat(dest, src);
	printf("strcat = %s\n", dest);

	return (0);
}
