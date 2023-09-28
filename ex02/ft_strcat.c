/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:10:26 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/19 17:45:53 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	tabdest[] = "hello";
	char	tabsrc[] = "world";

	printf("%s\n", tabsrc);
	printf("%s\n", tabdest);

	ft_strcat(tabdest, tabsrc);

	printf("%s\n", tabsrc);
	printf("%s\n", tabdest);
}*/
