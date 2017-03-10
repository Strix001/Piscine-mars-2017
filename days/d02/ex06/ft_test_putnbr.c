/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 17:56:18 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/09 22:57:41 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar(45);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

int		main(void)
{
	ft_putnbr(42);
	ft_putnbr(-24571654);
	ft_putnbr(-41);
	ft_putnbr(-149);
	ft_putnbr(+149);
	ft_putnbr(108825590);
	ft_putnbr(-1144661003);
	ft_putnbr(+-2147483648);
	ft_putnbr(2147483647);
}
