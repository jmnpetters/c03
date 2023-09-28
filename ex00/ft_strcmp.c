/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:49:47 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/19 17:42:45 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	int	j;
	char	tab[] = "abcdef";
	char	tabdiff[] = "abcdef";

	j = ft_strcmp(tab, tabdiff);

	if (j == 0)
	{
		printf("0");
	}
	else if (j < 0)
	{
		printf("-1");
	}
	else
	{
		printf("1");
	}
}*/
