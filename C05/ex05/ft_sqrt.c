/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:16:13 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/23 14:45:27 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	int	nb;
// 	int	result;

// 	nb = 0;
// 	result = 0;
// 	if (argc != 2)
// 	{
// 		return (0);
// 	}
// 	else
// 	{
// 		nb = atoi(argv[1]);
// 		result = ft_sqrt(nb);
// 		printf("A raíz quadrada de %d é: %d", nb, result);
// 	}
// 	return (0);
// }
