/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:32:41 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/15 16:04:30 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

// char	*ft_strcat(char *dest, char *src);

// int	main(void)
// {
// 	char dest[20] = "Hello ";
// 	char src[] = "World!";

// 	ft_strcat(dest, src);

// 	printf("strcat = %s\n", dest);

// 	return (0);
// }
