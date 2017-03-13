/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:01:38 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/13 14:52:02 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int n)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (n > 12)
		return (0);
	if (n < 1)
		return (1);
	while (n != 0)
	{
		result = result * i;
		i++;
		n--;
	}
	return (result);
}

int		main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
}
