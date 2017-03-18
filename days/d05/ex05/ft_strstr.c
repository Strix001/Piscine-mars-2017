/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 14:36:06 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/18 21:24:13 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	 size_to_find;

	i = 0;
	j = 0;
	size_to_find = 0;
	while (to_find[size_to_find] != '\0')
		size_to_find++;
	if (size_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == size_to_find - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(void)
{
	char	str1[] = "Hello World, poulet in your plate ...";
	char	*to_find = "poulet";

	printf("%s\n", ft_strstr(str1, to_find));
	return (0);
}
