#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*p1 = &a;

	ft_ft(p1);
	printf("%d", a);
	return (0);
}