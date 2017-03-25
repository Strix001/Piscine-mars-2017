/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 13:47:05 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/12 16:29:51 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_extreme(int x)
{
	int	num_colonne;

	num_colonne = 0;
	while (num_colonne <= x)
	{
		if (num_colonne == 0)
			ft_putchar('A');
		if (num_colonne > 0 && num_colonne < x - 1)
			ft_putchar('B');
		if (num_colonne == x - 1)
			ft_putchar('C');
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
			ft_putchar('B');
		if (num_colonne > 0 && num_colonne < (x - 1))
			ft_putchar(' ');
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
		if (num_ligne == 0 || num_ligne == (y - 1))
			ft_extreme(x);
		if (num_ligne > 0 && num_ligne < (y - 1))
			ft_lignes(x);
		num_ligne++;
	}
}
