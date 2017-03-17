/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:40:52 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 13:00:33 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	unsigned int	bits;
	int				i;
	int				length;

	i = 0;
	bits = 0;
	length = sizeof(int) * 8;
	while (i < length)
	{
		bits += (value & 1) == 1;
		value = value >> 1;
		i++;
	}
	return (bits);
}

int				main(void)
{
	printf("%d\n", ft_active_bits(0));
	printf("%d\n", ft_active_bits(1));
	printf("%d\n", ft_active_bits(2));
	printf("%d\n", ft_active_bits(3));
	printf("%d\n", ft_active_bits(7));
	printf("%d\n", ft_active_bits(9));
	printf("%d\n", ft_active_bits(11));
	printf("%d\n", ft_active_bits(13));
	printf("%d\n", ft_active_bits(15));
	printf("%d\n", ft_active_bits(17));
	printf("%d\n", ft_active_bits(42));
}
