/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:53:52 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/23 14:16:32 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	result = (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	return (result);
}

// int	main(void)
// {
// 	int	i;
// 	int	result;

// 	i = 0;
// 	while (i < 10)
// 	{
// 		result = ft_fibonacci(i);
// 		printf("Index: %d\n", result);
// 		i++;
// 	}

// 	return (0);
// }
