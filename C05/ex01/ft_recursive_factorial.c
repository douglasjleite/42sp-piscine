/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:27:41 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/22 19:25:01 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	result = nb * ft_recursive_factorial(nb - 1);
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
// 		result = ft_recursive_factorial(nb);
// 		printf("Fatorial recursivo de %d: %d", nb, result);
// 	}
// 	else
// 	{
// 		printf("Uso: %s <numero>\n", argv[0]);
// 	}
// 	return (0);
// }
