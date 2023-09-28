/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:23:54 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/19 17:47:24 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	tabsrc[100] = "hello";
	char	tabdiff[100] = "world";

	printf("%s\n", tabsrc);
	printf("%s\n", tabdiff);

	ft_strncat(tabdiff, tabsrc, 1);

	printf("%s\n", tabsrc);
	printf("%s\n", tabdiff);
}*/
