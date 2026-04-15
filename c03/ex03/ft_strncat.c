/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djesus-l <djesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:22:33 by djesus-l          #+#    #+#             */
/*   Updated: 2026/04/15 17:30:39 by djesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;
	int		i;

	start = dest;
	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (i < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}

// int	main(void)
// {
// 	char	dest[20] = "Hello ";
// 	char	src[] = "World!";
// 	int	nb = 4;

// 	ft_strncat(dest, src, nb);
// 	printf("strcat = %s\n", dest);

// 	return (0);
// }
