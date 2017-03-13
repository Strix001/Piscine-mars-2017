/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:40:07 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/13 16:50:24 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

int		main(void)
{
	printf("%d\n", ft_recursive_power(2, -5));
	printf("%d\n", ft_recursive_power(0, 5));
	printf("%d\n", ft_recursive_power(2, 1));
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(12, 2));
}
