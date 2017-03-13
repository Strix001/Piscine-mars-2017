/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 21:18:31 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/13 21:38:13 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int		main(void)
{
	printf("%d\n", ft_fibonacci(-10));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(9));
}
