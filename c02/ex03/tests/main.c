#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[] = "123456";
	char	str2[] = "159asD";
	char	str3[] = "";
	char	str4[] = ":)";
	char	str5[] = " ";

	printf("str1 = %d\n", ft_str_is_numeric(str1));
	printf("str2 = %d\n", ft_str_is_numeric(str2));
	printf("str3 = %d\n", ft_str_is_numeric(str3));
	printf("str4 = %d\n", ft_str_is_numeric(str4));
	printf("str5 = %d\n", ft_str_is_numeric(str5));

	return (0);
}
