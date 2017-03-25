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
	print_result(x, y, 2);
	ft_putstr(" || ");
	print_result(x, y, 3);
	ft_putstr(" || ");
	print_result(x, y, 4);
}

void	option_b(char *tab, int x, int y)
{
	if (tab[x - 1] == 'A')
		print_result(x, y, 2);
	else
	{
		print_result(x, y, 3);
		ft_putstr(" || ");
		print_result(x, y, 4);
	}
}

void	option_c(char *tab, int x, int y)
{
	if (tab[y * (x + 1) - (x)] == 'A')
		print_result(x, y, 3);
	else
	{
		print_result(x, y, 2);
		ft_putstr(" || ");
		print_result(x, y, 4);
	}
}

void	option_d(char *tab, int x, int y)
{
	if (tab[x - 1] == 'A' && tab[y * (x - 1) - x - 1] == 'C')
		print_result(x, y, 2);
	else if (tab[x - 1] == 'C' && tab[y * (x - 1) - x - 1] == 'A')
		print_result(x, y, 3);
	else
		print_result(x, y, 4);
}

void	error(void)
{
	ft_putstr("aucune\n");
}
