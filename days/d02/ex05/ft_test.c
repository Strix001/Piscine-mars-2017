/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 21:36:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/08 21:38:10 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 97 && b <= 99)
	{
		while (b < 100)
		{
			if (a < 10)
				ft_putchar('0');
			ft_putchar(a + '0');
			ft_putchar(32);
			if (b < 10)
				ft_putchar('0');
			ft_putchar(b + '0');
			ft_putchar(44);
			ft_putchar(32);
			b++;
		}
		a++;
	} 
	write(1, "98 99\n", 6);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
