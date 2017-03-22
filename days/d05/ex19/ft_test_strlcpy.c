/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 04:37:36 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/22 03:50:59 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_end;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (dest[i] && i < size)
		i++;
	dest_end = j;
	while (src[i - dest_end] && i < size - 1)
	{
		dest[i] = src[i - dest_end];
		i++;
	}
	dest[i] = '\0';
	return (dest_end);
}

int		main(int argc, char **argv)
{
	char *ptr;
	char *ptr2;

	ptr = malloc(100);
	ptr2 = malloc(100);
	strcpy(ptr, argv[1]);
	strcpy(ptr2, argv[1]);
	if (argc != 4)
		return (-1);
	else
	{
		printf("%lu\n", strlcpy(ptr, argv[2], (unsigned int)argv[3]));
		printf("%u\n", ft_strlcpy(ptr2, argv[2], (unsigned int)argv[3]));
	}
	return (0);
}
