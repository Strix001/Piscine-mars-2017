/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:01:38 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/13 14:49:49 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int n)
{
	int factor;
	int i;

	i = 1;
	factor = 1;
	if (n > 12)
		return (0);
	if (n < 1)
		return (1);
	while (n != 0)
	{
		factor = result * i;
		i++;
		n--;
	}
	return (result);
}
