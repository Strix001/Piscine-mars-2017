/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 13:56:40 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/12 14:54:29 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua(int size)
{
	int n;
	int spaces;

	spaces = size;	
	n = size - 1;
	while (size > 0)
	{
		while (spaces-- != 0)
			ft_putchar(' ');
		int to_print = (n - size) * 2 + 1;
		while (to_print-- > 0)
			ft_putchar('*');
		size--;
		ft_putchar('\n');
	}
}

int		main(void)
{
	sastantua(6);
	return (0);
}
