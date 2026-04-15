#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	res_div;
	int	res_mod;

	a = 60;
	b = 20;
	ft_div_mod(a, b, &res_div, &res_mod);

	printf("%d dividido por %d é: %d Resto: %d", a, b, res_div, res_mod);
	return(0);
}