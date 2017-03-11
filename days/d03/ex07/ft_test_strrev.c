/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 17:51:46 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/11 19:29:39 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_strrev(char *str)
{
	char	*str_rev;
	int		i;
	int		j;

	str_rev = "je suis";
	j = 0;
	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		str_rev[j] = str[i];
		printf("%c\n", str[j]);
		j++;
		i--;
	}
	*str = *str_rev;
	return (str_rev);
}

int		main(void)
{
	char	*test;

	test = "jesuis";
	ft_strrev(test);
}
