/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:55:29 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/22 17:59:21 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	int	nb;
// 	int	result;

// 	nb = 0;
// 	result = 0;
// 	if (argc == 2)
// 	{
// 		nb = atoi(argv[1]);
// 		result = ft_iterative_factorial(nb);
// 		printf("Fatorial de %d: %d\n", nb, result);
// 	}
// 	else
// 	{
// 		printf("Uso: ./a.out <numero>\n");
// 	}
// 	return (0);
// }
