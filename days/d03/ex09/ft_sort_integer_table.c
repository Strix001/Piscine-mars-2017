/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 13:40:35 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/14 19:29:57 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int n;
	int tmp;

	n = 0;
	while (n < size)
	{
		if (tab[n] > tab[n + 1])
		{
			tmp = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = tmp;
			n = 0;
		}
		else
			n++;
	}
}
