#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 10;
	nbr2 = 3;

	printf("*nbr1: %d e o valor de nbr2: %d. Antes do ponteiro", nbr1, nbr2);
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("\n*nbr1: %d e o valor de nbr2: %d. Depois do ponteiro", nbr1, nbr2);
	return (0);
}