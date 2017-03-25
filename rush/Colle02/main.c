/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 03:11:51 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/25 03:33:14 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*translate(char *tab)
{
	int		i;

	i = read(0, tab, sizeof(char *) * 4096);
	if (i == 0)
		return (0);
	else
	{
		tab[i] = '\0';
		return (tab);
	}
}

int		decode(void)
{
	char	*tab;

	if ((tab = malloc(sizeof(char *) * 4096)) == 0)
	{
		return (0);
	}
	if (translate(tab) == '\0')
		return (0);
	if (find_result(tab) == 0)
		return (0);
	free(tab);
	return (1);
}

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		error();
		return (0);
	}
	else
	{
		if (decode() == 0)
			return (0);
		return (0);
	}
}
