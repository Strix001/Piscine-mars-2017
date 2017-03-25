/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_result.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 02:51:26 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/25 04:22:06 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

void	multi_result(char *tab, int x, int y)
{
	if (x == 1 && y == 1)
		option_a(x, y);
	if (x > 1 && y == 1)
		option_b(tab, x, y);
	if (x == 1 && y > 1)
		option_c(tab, x, y);
	if (x > 1 && y > 1)
		option_d(tab, x, y);
}

int		find_y(char *tab, int y)
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

int		find_x(char *tab, int x)
{
	while (tab[x] != '\n')
		x++;
	return (x);
}

int		check(char *tab)
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] != 'A' && tab[i] != 'B' && tab[i] != 'C' &&
				tab[i] != '|' && tab[i] != '-' && tab[i] != 'o' &&
				tab[i] != '/' && tab[i] != 92 && tab[i] != '*' &&
				tab[i] != '\n' && tab[i] != ' ')
		{
			error();
			return (0);
		}
		i++;
	}
	return (1);
}

int		find_result(char *tab)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	x = find_x(tab, x);
	y = find_y(tab, y);
	if (check(tab) == 0)
		return (0);
	if (tab[0] == 'o')
		colle00(x, y);
	if (tab[0] == '/')
		colle01(x, y);
	if (tab[0] == 'A')
		multi_result(tab, x, y);
	ft_putchar('\n');
	return (1);
}
