/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 20:14:22 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/12 01:12:19 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

/*
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
*/
