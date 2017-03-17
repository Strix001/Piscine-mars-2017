/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:56:55 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 02:35:40 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_val(unsigned int base, unsigned int cnt)
{
	unsigned int b2;

	b2 = ((base % 2) == 0) ? (base / 2) : ((base * 3) + 1);
	if (b2 == 1)
		return (count++);
	else
		return (get_val(b2, (cnt + 1)));
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int cnt;

	cnt = 1;
	return (get_val(base, cnt));
}
