/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 13:40:35 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/14 18:39:49 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int n;
	int tmp;

	n = 0;
	while (n < size)
	{
		if (tab[n] > tab [n + 1])
		{
			tmp = tab[n];
			tab [n] = tab[n + 1];
			tab [n + 1] = tmp;
			n = 0;
		}
		else
			n++;
	}
}

int		main(void)
{
	int	tab[5];
	int i = 0;

	tab[0] = 10;
	tab[1] = 3;
	tab[2] = 42;
	tab[3] = -42;
	tab[4] = 5;
	ft_sort_integer_table(tab, 5);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}	
