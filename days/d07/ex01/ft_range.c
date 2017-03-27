/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:41:45 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/24 02:00:04 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
