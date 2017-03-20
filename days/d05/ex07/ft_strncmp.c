/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 14:31:40 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/20 14:54:55 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", strncmp(argv[1], argv[2], 20));
		printf("%d\n", ft_strncmp(argv[1], argv[2], 20));
	}
	else
		return (0);
}
