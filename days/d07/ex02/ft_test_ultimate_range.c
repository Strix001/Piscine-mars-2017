/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 23:36:31 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/24 03:51:23 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	*dest;

	j = 0;
	if (min >= max)
		return (0);
	if (!(dest = malloc(sizeof(int *) * (max - min + 1))))
		return (0);
	while ((j + min) < max)
	{
		dest[j] = j + min;
		j++;
	}
	dest[j] = '\0';
	*range = dest;
	return (j);
}

int		main(int argc, char **argv)
{
	int a;
	int av1;
	int av2;
	int	**av3;

	av1 = atoi(argv[1]);
	av2 = atoi(argv[2]);
	av3 = 0;
	a = ft_ultimate_range(av3, av1, av2);
	if (argc == 0)
		return (-1);
	printf("%d",a);
	return (0);
}
