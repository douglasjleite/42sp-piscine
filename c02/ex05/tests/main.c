#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char str1[] = "ABC";
	char str2[] = "abc";
	char str3[] = "123";
	char str4[] = "";
	char str5[] = "12aB";

	printf("str1 = %d\n", ft_str_is_uppercase(str1));
	printf("str2 = %d\n", ft_str_is_uppercase(str2));
	printf("str3 = %d\n", ft_str_is_uppercase(str3));
	printf("str4 = %d\n", ft_str_is_uppercase(str4));
	printf("str5 = %d\n", ft_str_is_uppercase(str5));

	return (0);
}
