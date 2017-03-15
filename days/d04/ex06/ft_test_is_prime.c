/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:02:24 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/15 17:11:15 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int	i;
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

int		main(void)
{
	printf("%d\n", ft_is_prime(-42));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(201));
	printf("%d\n", ft_is_prime(201));
	printf("%d\n", ft_is_prime(203));
	printf("%d\n", ft_is_prime(209));
	printf("%d\n", ft_is_prime(422397));
	printf("%d\n", ft_is_prime(95743));
}
