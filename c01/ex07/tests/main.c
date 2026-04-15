#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int i;
	int size;
	int tab[] = {1, 2, 3, 4, 5};

	size = 5;

	// antes
	printf("Antes : ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	//chamada da funcao
	ft_rev_int_tab(tab, size);

	//depois
	printf("\nDepois : ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	
	return (0);
}