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
		j++;
		i--;
	}
	dest[j] = '\0';
	range = &dest;
	return (j);
}
