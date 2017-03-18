/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 16:53:03 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/18 17:24:37 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_li_col(int nb, int grille[9][9], int line, int column)
{
	int col;
	int li;

	col = 0;
	while (col < 9)
		if (grille[line][col++] == nb)
			return (0);
	li = 0;
	while (li < 9)
		if (grille[li++][column] == nb)
			return (0);
	return (1);
}

int		ft_block(int nb, int grille[9][9], int line, int column)
{
	int ii;
	int jj;

	ii = line - (line % 3);
	jj = column - (column % 3);
	line = ii;
	while (line < ii + 3)
	{
		column = jj;
		while (column < jj + 3)
		{
			if (grille[line][column] == nb)
				return (0);
			column++;
		}
		line++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
