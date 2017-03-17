/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 22:33:21 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/16 23:46:17 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_button(int i, int j, int k)
{
	if ((i < j && i > k) || (i > j && i < k))
		return (i);
	if ((j < k && j > i) || (j > k && j < i))
		return (j);
	if (i == j || i == k)
		return (i);
	if (j == i || j == k)
		return (j);
	else
		return (k);
}

int		main(void)
{
	int i = 2;
	int j = 5;
	int k = 3;

	printf("%d\n", ft_button(i, j, k));
}
