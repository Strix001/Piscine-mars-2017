/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 23:36:31 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/27 07:44:07 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

