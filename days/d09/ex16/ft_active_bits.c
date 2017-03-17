/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:40:52 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 13:11:13 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
