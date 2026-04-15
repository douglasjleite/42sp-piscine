/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:00:17 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/12 01:13:51 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
int	main(void)
{
	int	i;
	int	size;
	int	tab[] = {1, 2, 3, 4, 5};

	size = 5;
	printf("Antes : ");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);

	printf("\nDepois : ");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
