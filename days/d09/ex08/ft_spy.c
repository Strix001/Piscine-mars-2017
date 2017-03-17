/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:35:02 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 15:36:40 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int         parse_against(char *parsee, char *parsed)
{
	int     i;

	i = 0;
	while (*(parsee + i) != '\0' && *(parsed + i) != '\0')
	{
		if (!(*(parsee + i) == *(parsed + i)))
			return (0);
		if (*(parsee + i) == 32)
			return (1);
		i++;
	}
	return (1);
}

int         parse(char *str)
{
	while (*str != '\0' && (*str == 32 || (*str > 8 && *str < 14)))
		str++;
	if (parse_against("president", str) || parse_against("attack", str) ||
			parse_against("powers", str))
		return (1);
	return (0);
}

int         main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (parse(argv[i]))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
