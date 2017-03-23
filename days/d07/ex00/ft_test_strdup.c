/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:11:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/23 16:20:31 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(i + 1);
	if (dest == 0)
		 	return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char ** argv)
{
	if (argc == 0)
		return (-1);
	char	*ptr;

	ptr = malloc(100);
	strcpy(ptr, argv[1]);
	printf("%s\n", ft_strdup(ptr));
	printf("%s\n", strdup(argv[1]));
	return (0);
}
