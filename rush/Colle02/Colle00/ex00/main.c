/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 15:39:54 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/25 16:20:39 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc == 0)
		return (-1);
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
