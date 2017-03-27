/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:41:45 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/24 01:59:31 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	j;
	int	*dest;

	j = 0;
	if (min >= max)
		return (0);
	dest = malloc(sizeof(int) * (max - min + 1));
	if (dest == 0)
		return (0);
	while ((min + j) < max)
	{
		dest[j] = j + min;
		j++;
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	int	*ptr;
	int i;
	int len;
	int av1;
	int av2;

	av1 = atoi(argv[1]);
	av2 = atoi(argv[2]);
	i = 0;
	len = av2 - av1;
	ptr = ft_range(av1, av2);
	printf("beg: %d, end: %d\n", av1, av2);
	if (argc == 0)
		return (-1);
	while (i < len)
	{
		printf("%d: %d\n", i, ptr[i]);
		i++;
	}
	return (0);
}
