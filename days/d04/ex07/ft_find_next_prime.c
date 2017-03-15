/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:53:20 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/15 17:24:23 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int n;

	i = 3;
	n = nb / 2;
	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	while (i < n)
	{
		if (nb % i == 0)
			return (0);
		else
			i = i + 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb < 46341)
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	return (0);
}
