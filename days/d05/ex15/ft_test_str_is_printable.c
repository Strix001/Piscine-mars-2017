/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 21:49:34 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/22 03:41:55 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 127 || str[i] > 32)
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_str_is_printable(argv[1]));
	else
		return (0);
}
