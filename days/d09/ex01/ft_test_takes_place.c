/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:48:24 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/16 18:30:10 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("%s", "12.00 A.M. AND 1.00 A.M.\n");
	if (hour > 0 && hour < 11)
	{
		printf("%d", hour);
		printf("%s", ".00 A.M. AND ");
		printf("%d", hour + 1);
		printf("%s", ".00 A.M.\n");
	}
	if (hour == 11)
		printf("%s", "11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("%s", "12.00 P.M. AND 1.00 P.M.\n");
	if (hour > 12 && hour < 23)
	{
		printf("%d", hour - 12);
		printf("%s", ".00 P.M. AND ");
		printf("%d", hour - 11);
		printf("%s", ".00 P.M.\n");
	}
	if (hour == 23)
		printf("%s", "11.00 P.M. AND 12.00 A.M.\n");
}

int		main(void)
{
	ft_takes_place(0);
	ft_takes_place(1);
	ft_takes_place(2);
	ft_takes_place(3);
	ft_takes_place(4);
	ft_takes_place(5);
	ft_takes_place(6);
	ft_takes_place(7);
	ft_takes_place(8);
	ft_takes_place(9);
	ft_takes_place(10);
	ft_takes_place(11);
	ft_takes_place(12);
	ft_takes_place(13);
	ft_takes_place(14);
	ft_takes_place(15);
	ft_takes_place(16);
	ft_takes_place(17);
	ft_takes_place(18);
	ft_takes_place(19);
	ft_takes_place(20);
	ft_takes_place(21);
	ft_takes_place(22);
	ft_takes_place(23);
	return (0);
}
