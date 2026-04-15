#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("strupcase = %s\n", ft_strupcase(str));
	
	return (0);
}
