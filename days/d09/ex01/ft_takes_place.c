/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:48:24 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/16 18:45:22 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
