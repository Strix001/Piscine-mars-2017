/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_print_reverse_alphabet.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 12:39:04 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/08 16:35:03 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		ft_putchar(a);
		a--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
