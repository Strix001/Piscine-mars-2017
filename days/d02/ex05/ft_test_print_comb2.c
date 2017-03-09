/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 21:36:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/09 15:10:56 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(int n)
{
	if (n < 10)
		ft_putchar('0');
	else
		ft_putchar('0' + (n / 10) % 10);
	ft_putchar('0' + n % 10);
}

void	ft_putnbr(int a, int b, int end)
{
	ft_putnumber(a);
	ft_putchar(32);
	ft_putnumber(b);
	if (end > 0)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b < 100)
		{
			ft_putnbr(a, b, 1);
			b++;
		}
		a++;
		b = a + 1;
	}
	ft_putnbr(a, b, 0);
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
