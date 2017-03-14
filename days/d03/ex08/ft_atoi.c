/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 00:47:39 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/14 01:18:03 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{	
	int		i;
	int		negativ;
	int		number;

	i = 0;
	negativ = 0;
	number = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == 45)
		negativ = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10;
		number = number + ((int)str[i] - 48);
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}
