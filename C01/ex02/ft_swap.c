/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:37:40 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/12 01:10:37 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int	main(void)
{
	int	v1;
	int	v2;

	v1 = 42;
	v2 = 70;
	ft_swap(&v1, &v2);
	printf("Valor de v1: %d\nValor de v2: %d\n", v1, v2);
	printf("Endereco 1: %p\nEndereco 2: %p\n", &v1, &v2);

	return (0);
}
*/
