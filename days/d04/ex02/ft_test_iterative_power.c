/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:39:24 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/13 16:14:43 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	while (power > 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}

int		main(void)
{
	printf("%d\n", ft_iterative_power(2, -5));
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(12, 2));
}
