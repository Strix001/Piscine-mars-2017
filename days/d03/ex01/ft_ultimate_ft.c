/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 10:57:10 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/10 14:23:07 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(*********nbr)
{
	*********nbr = 42;
}

int		main(void)
{
	int	a;
	int *b;
	int **c;
	int ***d;
	int ****e;
	int	*****f;
	int	******g;
	int *******h;
	int	********i;
	int	*********j;

	a = 0;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;
	printf("%d \n", a);
	ft_ultimate_ft(j);
	printf("%d \n", a);
	return (0);
}
