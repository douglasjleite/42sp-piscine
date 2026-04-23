/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:45:10 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/15 12:55:37 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char s1[] = "abc";
// 	char s2[] = "abc";
// 	int result = ft_strcmp(s1, s2);

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
