/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_result.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 03:09:32 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/25 03:37:02 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

void	option_a(int x, int y)
{
	colle02(x, y);
	ft_putstr(" || ");
	colle03(x, y);
	ft_putstr(" || ");
	colle04(x, y);
}

void	option_b(char *tab, int x, int y)
{
	if (tab[x - 1] == 'A')
		colle02(x, y);
	else
	{
		colle03(x, y);
		ft_putstr(" || ");
		colle04(x, y);
	}
}

void	option_c(char *tab, int x, int y)
{
	if (tab[y * (x + 1) - (x)] == 'A')
		colle03(x, y);
	else
	{
		colle02(x, y);
		ft_putstr(" || ");
		colle04(x, y);
	}
}

void	option_d(char *tab, int x, int y)
{
	if (tab[x - 1] == 'A' && tab[y * (x - 1) - x - 1] == 'C')
		colle02(x, y);
	else if (tab[x - 1] == 'C' && tab[y * (x - 1) - x - 1] == 'A')
		colle03(x, y);
	else
		colle04(x, y);
}

void	error(void)
{
	ft_putstr("aucune\n");
}
