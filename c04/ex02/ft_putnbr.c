/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:11:53 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/20 16:28:14 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	if (argc != 2)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}
// 	i = 0;
// 	while (argv[1][i])
// 	{
// 		write(1, &argv[1][i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
