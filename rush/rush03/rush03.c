/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 13:47:05 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/12 13:48:30 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_extreme(int nb_colonne)
{
	int	num_colonne;

	num_colonne = 0;
	while (num_colonne <= nb_colonne)
	{
		if (num_colonne == 0)
			ft_putchar('A');
		if (num_colonne > 0 && num_colonne < nb_colonne - 1)
			ft_putchar('B');
		if (num_colonne == nb_colonne - 1)
			ft_putchar('C');
		if (num_colonne == nb_colonne)
			ft_putchar('\n');
		num_colonne++;
	}
}

void	ft_lignes(int nb_colonne)
{
	int	num_colonne;

	num_colonne = 0;
	while (num_colonne <= nb_colonne)
	{
		if (num_colonne == 0 || num_colonne == (nb_colonne - 1))
			ft_putchar('B');
		if (num_colonne > 0 && num_colonne < (nb_colonne - 1))
			ft_putchar(' ');
		if (num_colonne == nb_colonne)
			ft_putchar('\n');
		num_colonne++;
	}
}

void	rush_03(int nb_colonne, int nb_ligne)
{
	int	num_ligne;

	num_ligne = 0;
	if (nb_colonne == 0 || nb_ligne == 0)
		return ;
	while (num_ligne < nb_ligne)
	{
		if (num_ligne == 0 || num_ligne == (nb_ligne - 1))
			ft_extreme(nb_colonne);
		if (num_ligne > 0 && num_ligne < (nb_ligne -1))
			ft_lignes(nb_colonne);
		num_ligne++;
	}
}

int		main(void)
{
	rush_03(5, 8);
	return (0);
}
