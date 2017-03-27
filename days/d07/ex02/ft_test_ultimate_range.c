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
	int i;
	int	j;
	int	*dest;

	i = max - min;
	j = 0;
	dest = malloc(sizeof(int *) * (i + 1));
	if (dest == 0 || min >= max )
	{
		range = 0;
		return (0);
	}
	while (i > 0)
	{
		dest[j] = j + min;
		printf("%d\n", dest[j]);
		j++;
		i--;
	}
	dest[j] = '\0';
	range = &dest;
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
