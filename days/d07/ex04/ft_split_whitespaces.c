/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 01:00:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/26 05:45:59 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_count_words(char *str)
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
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			i++;
	}
	return (x);
}

int     ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_words(char *str)
{
	int		i;
	int		j;
	char	 *word;

	i = 0;
	printf("before j\n");
	j = ft_strlen(str);
	word = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (word == 0)
		return(0);
	printf("I passed malloc\n");
	while (i < ft_strlen(str))
	{
		printf("inwords");
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	printf("word : %c\n", word[i]);
	return (word);
}

char    **ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	k = ft_count_words(str);
	printf("k = %d \n", k);
	if(!(dest = malloc(sizeof(char *) * (k + 1))))
		return (0);
	printf("I passed malloc twice\n");
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			printf("i = %d\n", i);
			i++;
		}
		printf("pre-word\n");
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			printf("%d\n", j);
			dest[j] = ft_words(str);
			j++;
			printf("%s\n", dest[j]);
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	printf("dest : %s\n", dest[j]);
	dest[j] = 0;
	return(dest);
}

int     main(int argc, char **argv)
{
	if (argc == 0)
		return (-1);
	printf("test1\n");
	ft_split_whitespaces(argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}
