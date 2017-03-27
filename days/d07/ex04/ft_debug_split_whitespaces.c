/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 01:00:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/27 04:45:16 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (x);
}

int     ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

void	ft_words(char *str, char *word)
{
	int		i;
	int		j;

	i = 0;
	printf("before j\n");
	j = ft_strlen(str);
//	word = malloc(sizeof(char) * (j + 1));
//	if (word == 0)
//		return ;
	printf("I passed malloc\n%d\n", j);
	while (i < j)
	{
		word[i] = str[i];
		printf("%d, %c\n", i, word[i]);
		i++;
	}
	word[i] = 0;
	printf("word : %s\n", word);
}

char    **ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	k = ft_count_words(str);
	if(!(dest = malloc(sizeof(dest) * (k + 1))))
		return (0);
	write(1, "I PASSED MALLOC ONCE\n", 21);
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			write(1, "t ", 2);
			i++;
		}
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			write(1, "STRLEN M`THERFUCKING NOOB\n", 26);
			k = ft_strlen(str + i);
			write(1, "MALLOC MOTHERFUCKING NOOB\n", 26);
			dest[j] = malloc(sizeof(*dest) * (k + 1));
			write(1, "I PASSED MALLOC TWICE\n", 22);
			if (dest[j] == 0)
				return (0);
			ft_words((str + i), dest[j]);
			printf("%s\n", dest[j]);
			j++;
			write(1, "t\n", 2);
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
//	printf("dest : %s\n", dest[j - 2]);
	dest[j] = 0;
	return(dest);
}

int     main(int argc, char **argv)
{
	if (argc == 0)
		return (-1);
	printf("%s\n%s\n", ft_split_whitespaces(argv[1])[0], ft_split_whitespaces(argv[1])[1]);
	printf("%s\n", argv[1]);
	return (0);
}
