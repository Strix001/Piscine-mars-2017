/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:16:09 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/12 16:21:33 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_premiere_ligne(int x)
{
	int	num_colonne;

	num_colonne = 0;
	while (num_colonne <= x)
	{
		if (num_colonne == 0)
			ft_putchar('/');
		if (num_colonne > 0 && num_colonne < (x - 1))
			ft_putchar('*');
		if (num_colonne == (x - 1))
			ft_putchar(92);
		if (num_colonne == x)
			ft_putchar('\n');
		num_colonne++;
	}
}

void	ft_lignes(int x)
{
	int	num_colonne;

	num_colonne = 0;
	while (num_colonne <= x)
	{
		if (num_colonne == 0 || num_colonne == (x - 1))
			ft_putchar('*');
		if (num_colonne > 0 && num_colonne < (x - 1))
			ft_putchar(' ');
		if (num_colonne == x)
			ft_putchar('\n');
		num_colonne++;
	}
}

void	ft_derniere_ligne(int x)
{
	int	num_colonne;

	num_colonne = 0;
	while (num_colonne <= x)
	{
		if (num_colonne == 0)
			ft_putchar(92);
		if (num_colonne > 0 && num_colonne < (x - 1))
			ft_putchar('*');
		if (num_colonne == (x - 1))
			ft_putchar('/');
		if (num_colonne == x)
			ft_putchar('\n');
		num_colonne++;
	}
}

void	rush(int x, int y)
{
	int	num_ligne;

	num_ligne = 0;
	if (x == 0 || y == 0)
		return ;
	while (num_ligne < y)
	{
		if (num_ligne == 0)
			ft_premiere_ligne(x);
		if (num_ligne > 0 && num_ligne < (y - 1))
			ft_lignes(x);
		if (num_ligne == (y - 1))
			ft_derniere_ligne(x);
		num_ligne++;
	}
}
