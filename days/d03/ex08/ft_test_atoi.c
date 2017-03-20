/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 00:47:39 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/19 16:12:43 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{	
	int		i;
	int		negatif;
	int		nb;

	i = 0;
	negatif = 0;
	nb = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == 45)
		negatif = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if (negatif == 1)
		return (-nb);
	else
		return (nb);
}

int		main(void)
{
	char	str1[] = " 123 789";

	printf("%d", ft_atoi(str1));
}
