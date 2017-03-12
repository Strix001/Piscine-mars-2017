/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 17:54:25 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/12 22:54:53 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		largeur_etage_i(int i)
{
	if (i == 0)
		return (7);
	return (largeur_etage_i(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void	door(int largeur, int decallage, int size, int i, int j)
{
	if (i == size - 1 && i > size - 2 == 1 
			&& j == largeur / 2 + largeur % 2 == 1)
		ft_putchar('|');
	else
		ft_putchar('*');
}

void	etage(int hauteur, int largeur, int decallage, int size)
{
	int i;
	int j;

	i = 0;
	while (i < hauteur)
	{
		j = -decallage;
		while (j < hauteur - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j += hauteur + 1 - i;
		ft_putchar('/');
		while (j < largeur)
		{
			door(largeur, decallage, size, i, j);
			j++;
		}
		ft_putchar(92);
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int hauteur;
	int largeur;
	int decallage;

	i = 0;
	while (i < size)
	{
		decallage = (largeur_etage_i(size - 1) - largeur_etage_i(i)) / 2;
		hauteur = 3 + i;
		largeur = largeur_etage_i(i);
		etage(hauteur, largeur, decallage, size);
		i++;
	}
}
