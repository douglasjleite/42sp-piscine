/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 18:46:08 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/12 01:14:10 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swapped;

	swapped = 1;
	while (swapped == 1)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

/*
int	main(void)
{
	int	i;
	int	size;
	int	tab[] =  {6, 3, 2, 7, 1, 5, 4};

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
*/
