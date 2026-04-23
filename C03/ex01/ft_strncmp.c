/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:35:54 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/15 13:00:09 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "abcdefg";
// 	char	s2[] = "abcEfg";
// 	unsigned int	n = 2;

// 	int	result = ft_strncmp(s1, s2, n);

// 	if (result == 0)
// 	{
// 		printf("result = %d (strings iguais)\n", result);
// 	}
// 	else if (result < 0)
// 	{
// 		printf("result = %d (s1 < s2)\n", result);
// 	}
// 	else
// 	{
// 		printf("result = %d (s1 > s2)\n", result);
// 	}
// 	return (0);
// }

