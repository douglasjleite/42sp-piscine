#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char str1[] = "123";
	char str2[] = "abc";
	char str3[] = "AbC";
	char str4[] = "";
	char str5[] = "\n";

	printf("str1 = %d\n", ft_str_is_printable(str1));
	printf("str1 = %d\n", ft_str_is_printable(str2));
	printf("str1 = %d\n", ft_str_is_printable(str3));
	printf("str1 = %d\n", ft_str_is_printable(str4));
	printf("str1 = %d\n", ft_str_is_printable(str5));

	return (0);
}
