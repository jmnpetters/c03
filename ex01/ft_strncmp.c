/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpetters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:56:55 by jpetters          #+#    #+#             */
/*   Updated: 2023/09/19 17:44:33 by jpetters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	int	j;
	char	tab[] = "abg";
	char	tabdiff[] = "abf";

	j = ft_strncmp(tab, tabdiff, 3);

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
