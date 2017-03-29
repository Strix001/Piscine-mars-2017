/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:29:36 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/29 21:03:56 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			i = length;
		else
			i++;
	}
	if (i == length - 1)
		return (1);
	printf("test1\n");
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			i = length;
		i++;
	}
	if (i == length - 1)
		return (1);
	else
		return (0);
}

int		ft_int(int a, int b)
{
	printf("calcul :%d\n", a - b);
	return (a - b);
}

int		main(void)
{
	int	tab[5] = {-543, -251, -100, -30, -3};
	int	tab1[5] = {6, 5, 2, 2, 0};
	int	tab2[5] = {1, 2, 2, 5, 0};

	int (*f)(int, int);

	f = &ft_int;
	printf("%d\n", ft_is_sort(tab, 5, f));
	printf("%d\n", ft_is_sort(tab1, 5, f));
	printf("%d\n", ft_is_sort(tab2, 5, f));
}
