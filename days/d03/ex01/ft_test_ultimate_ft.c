/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 10:57:10 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/10 11:29:42 by clbergon         ###   ########.fr       */
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
	int	*********ptr;

	a = 0;
	ptr = &a;
	printf("%d \n", a);
	ft_ultimate_ft(ptr);
	printf("%d \n", a);
	return (0);
}
