/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 16:48:36 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/18 17:23:43 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "sudoku.c"

void	afficher_grille(int grille[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf(((j + 1) % 3) ? "%d " : "%d ", grille[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		ft_check_row(int k, int grille[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
		if (grille[i][j++] == k)
			return (0);
	return (1);
}

int		ft_check_col(int k, int grille[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
		if (grille[i++][j] == k)
			return (0);
	return (1);
}

int		ft_check_block(int k, int grille[9][9], int i, int j)
{
	int ii;
	int jj;

	ii = i - (i % 3);
	jj = j - (j % 3);
	i = ii;
	while (i < ii + 3)
	{
		j = jj;
		while (j < jj + 3)
		{
			if (grille[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		estvalide(int grille[9][9], int position)
{
	int k;
	int i;
	int j;

	i = position / 9;
	j = position % 9;
	if (position == 9 * 9)
		return (1);
	if (grille[i][j] != 0)
		return (estvalide(grille, position + 1));
	k = 1;
	while (k <= 9)
	{
		if (ft_check_row(k, grille, i) &&
		ft_check_col(k, grille, j) && ft_check_block(k, grille, i, j))
		{
			grille[i][j] = k;
			if (estvalide(grille, position + 1))
				return (1);
		}
		k++;
	}
	grille[i][j] = 0;
	return (0);
}

int		main(int ac, char **av)
{
	int i;
	int j;
	int k;
	int l;
	int grille[9][9];

	if (ac != 10)
		return (0);
	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j <= 8)
		{
			if (av[i][j] == '.')
				grille[i - 1][j] = 0;
			else
				grille[i - 1][j] = av[i][j] - '0';
			j++;
		}
		i++;
	}
	estvalide(grille, 0);
	afficher_grille(grille);
}
