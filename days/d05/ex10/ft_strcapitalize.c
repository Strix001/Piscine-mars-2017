/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:12:34 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/22 04:56:18 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] <= 'z' && str[i] >= 'a')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 'A' || (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z')
		{
			if (str[i] <= 'z' && str[i] >= 'a' && (str[i - 1] < '0'
						&& str[i] > '9'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
