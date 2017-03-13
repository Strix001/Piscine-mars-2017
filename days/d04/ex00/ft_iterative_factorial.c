/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:01:38 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/13 15:25:16 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factor;
	int i;

	i = 1;
	result = 1;
	if (nb > 12 || nb < 0 )
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		result = result * i;
		i++;
		nb--;
	}
	return (result);
}
