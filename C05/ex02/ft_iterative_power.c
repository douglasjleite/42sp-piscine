/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:46:35 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/22 19:15:51 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	int	nb;
// 	int	pwr;
// 	int	result;

// 	nb = 0;
// 	result = 0;
// 	if (argc == 3)
// 	{
// 		nb = atoi(argv[1]);
// 		pwr = atoi(argv[2]);
// 		result = ft_iterative_power(nb, pwr);
// 		printf("%d elevado a %d é: %d\n", nb, pwr, result);
// 	}
// 	else
// 	{
// 		printf("Uso: %s <base> <potencia>\n", argv[0]);
// 	}
// 	return (0);
// }
