/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 00:24:55 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/21 03:11:48 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
		size++;
	while (src[i] != '\0' && nb > 0)
	{
		dest[size] = src[i];
		i++;
		size++;
		nb--;
	}
	dest[size] = '\0';
	return (dest);
}

#include <stdlib.h>

int		main(int argc, char **argv)
{

	if (argc != 4)
		return (-1);

	char *ptr;
	char *ptr2;

	ptr = malloc(100);
	ptr2 = malloc(100);
	strcpy(ptr, argv[1]);
	strcpy(ptr2, argv[1]);

	printf("%s\n", strncat(ptr, argv[2], atoi(argv[3])));
	printf("%s\n", ft_strncat(ptr2, argv[2], atoi(argv[3])));
	return (0);
}
