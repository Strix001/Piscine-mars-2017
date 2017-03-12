/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 12:06:12 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/12 12:27:49 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int nb_column)
{
	int	num_column;

	num_column = 0;
	while (num_column <= nb_column)
	{
		if (num_column == 0 || num_column == (nb_column - 1))
			ft_putchar('A');
		if (num_column > 0 && num_column < (nb_column - 1))
			ft_putchar('B');
		if (num_column == nb_column)
			ft_putchar('\n');
		num_column++;
	}
}

void	ft_lines(int nb_column)
{
	int	num_column;

	num_column = 0;
	while (num_column <= nb_column)
	{
		if (num_column == 0 || num_column == (nb_column - 1))
			ft_putchar('B');
		if (num_column > 0 && num_column < (nb_column - 1))
			ft_putchar(' ');
		if (num_column == nb_column)
			ft_putchar('\n');
		num_column++;
	}
}

void	ft_last_line(int nb_column)
{
	int	num_column;

	num_column = 0;
	while (num_column <= nb_column)
	{
		if (num_column == 0 || num_column == (nb_column - 1))
			ft_putchar('C');
		if (num_column > 0 && num_column < (nb_column - 1))
			ft_putchar('B');
		if (num_column == nb_column)
			ft_putchar('\n');
		num_column++;
	}
}

void	rush_02(int nb_column, int nb_line)
{
	int	num_line;

	num_line = 0;
	if (nb_column == 0 || nb_line == 0)
		return ;
	while (num_line < nb_line)
	{
		if (num_line == 0)
			ft_first_line(nb_column);
		if (num_line > 0 && num_line < (nb_line - 1))
			ft_lines(nb_column);
		if (num_line == (nb_line - 1))
			ft_last_line(nb_column);
		num_line++;
	}
}

int		main(void)
{
	rush_02(5, 8);
	return (0);
}
