/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 21:43:52 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/15 16:09:22 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (nb == i * i)
			return (i);
		else
			i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(50));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(81));
}
