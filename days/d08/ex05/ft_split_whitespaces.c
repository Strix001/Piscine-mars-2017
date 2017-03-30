/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 01:00:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/27 05:03:54 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			x++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (x);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

int		ft_words(char *str, char *word)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	j = 0;
	k = ft_count_words(str);
	if (!(dest = malloc(sizeof(dest) * (k + 1))))
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = ft_strlen(str + i);
			if (!(dest[j] = malloc(sizeof(*dest) * (k + 1))))
				return (0);
			i = i + ft_words((str + i), dest[j]);
			j++;
		}
	}
	dest[j] = 0;
	return (dest);
}
