/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:54:51 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/20 14:36:37 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	if (argc < 2)
// 	{
// 		printf("Uso: ./a.out <number1> <number2>..\n");
// 		return (1);
// 	}

// 	i = 1;
// 	while (i < argc)
// 	{
// 		printf("Entrada: \"%s\" Saída: %d\n", argv[i], ft_atoi(argv[i]));
// 		i++;
// 	}
// 	return (0);
// }
