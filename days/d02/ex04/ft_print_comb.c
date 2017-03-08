/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 21:29:51 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/08 21:52:55 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n, int o, int p)
{
	ft_putchar(n + '0');
	ft_putchar(o + '0');
	ft_putchar(p + '0');
	ft_putchar(44);
	ft_putchar(32);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = a + 1;
	c = a + 2;
	while (a <= 6)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				ft_putnbr(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	write(1, "789\n", 4);
}
