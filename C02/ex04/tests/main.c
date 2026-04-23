#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str1[] = "abc";
	char str2[] = "ABC";
	char str3[] = "aBc";
	char str4[] = "";
	char str5[] = "156";

	printf("str1 = %d\n", ft_str_is_lowercase(str1));
	printf("str2 = %d\n", ft_str_is_lowercase(str2));
	printf("str3 = %d\n", ft_str_is_lowercase(str3));
	printf("str4 = %d\n", ft_str_is_lowercase(str4));
	printf("str5 = %d\n", ft_str_is_lowercase(str5));

	return (0);
}
