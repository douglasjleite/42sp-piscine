/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:13:25 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/12 01:11:17 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	res_div;
	int	res_mod;

	a = 60;
	b = 20;
	ft_div_mod(a, b, &res_div, &res_mod);

	printf("%d dividido por %d é: %d Resto: %d", a, b, res_div, res_mod);
	return(0);
}
*/
