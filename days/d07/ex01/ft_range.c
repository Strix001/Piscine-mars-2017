/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:41:45 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/23 23:32:05 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*dest;

	i = max - min;
	j = 0;
	dest = malloc((i + 1) * sizeof(int));
	if (dest == 0)
		return (0);
	dest[j] = min;
	while (i > 0)
	{
		printf("%d\n", j);
		dest[j] = j + min;
		j++;
		i--;
	}
	return (dest);
}
