#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str1[] = "abc";
	char str2[] = "ABC";
	char str3[] = "";
	char str4[] = "\n";
	char str5[] = "ab12AE";

	printf("str1 = %d\n", ft_str_is_alpha(str1));
	printf("str2 = %d\n", ft_str_is_alpha(str2));
	printf("str3 = %d\n", ft_str_is_alpha(str3));
	printf("str4 = %d\n", ft_str_is_alpha(str4));
	printf("str5 = %d\n", ft_str_is_alpha(str5));

	return (0);
}
