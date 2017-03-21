/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 03:15:59 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/21 04:19:31 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
	dest_end = i;
	while (src[i - dest_end] && i < size - 1)
	{
		dest[i] = src[i - dest_end];
		i++;
	}
	if (dest_end < size)
		dest[i] = '\0';
	return (dest_end + j);
}

int		main(int argc, char ** argv)
{
	char	*ptr;
	char 	*ptr2;

	ptr = malloc(100);
	ptr2 = malloc(100);
	strcpy(ptr, argv[1]);
	strcpy(ptr2, argv[1]);

	if (argc == 4)
	{
		printf("%lu\n", strlcat(ptr, argv[2], ((unsigned int)argv[3])));
		printf("%u\n", ft_strlcat(ptr2, argv[2], ((unsigned int)argv[3])));
	}
	return (0);
}
