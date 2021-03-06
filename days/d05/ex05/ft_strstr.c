/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 14:36:06 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/21 16:57:34 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size_to_find;

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
