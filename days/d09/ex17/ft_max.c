/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 11:19:07 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 11:34:22 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_max(int *tab, int length)
{
	int i;
	int tmp;

	i = 0;
	while (i < (length - 1))
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return tab[0];
}

int		main(void)
{
	int	tab[6];

	tab[0] = 42;
	tab[1] = 3;
	tab[2] = 22;
	tab[3] = 26;
	tab[4] = 29;
	tab[5] = 666;
	printf("%d\n", ft_max(tab, 6));
}
