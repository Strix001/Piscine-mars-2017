/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 22:16:58 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/21 03:07:45 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
		size++;
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{	
	char *ptr;
	char *ptr2;

	ptr = malloc(100);
	ptr2 = malloc(100);
	strcpy(ptr, argv[1]);
	strcpy(ptr2, argv[1]);

	if (argc == 3)
	{
		printf("%s\n", strcat(ptr, argv[2]));
		printf("%s\n", ft_strcat(ptr2, argv[2]));
	}
	else
		return (0);
}
