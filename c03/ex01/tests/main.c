#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abcEfg";
	unsigned int n = 2;

	int result = ft_strncmp(s1, s2, n);
	
	if (result == 0)
	{
		printf("result = %d (strings iguais)\n", result);
	}
	else if (result < 0)
	{
		printf("result = %d (s1 < s2)\n", result);
	}
	else
	{
		printf("result = %d (s1 > s2)\n", result);
	}
	return (0);
}	