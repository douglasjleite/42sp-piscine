#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int size;
	int tab[] =  {6, 3, 2, 7, 1, 5, 4};

	size = 7;
	printf("Antes: ");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	ft_sort_int_tab(tab, size);

	printf("\nDepois: ");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");

	return (0);
}
