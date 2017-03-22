/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:22:44 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/22 10:04:27 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	char			dest[6] = "      ";
	unsigned int	n;

	n = 6;
	if (argc == 2)
	{
		printf("%s\n", ft_strncpy(dest, argv[1], n));
		printf("%s\n", strncpy(dest, argv[1], n));
	}
	else
		return (0);
}
