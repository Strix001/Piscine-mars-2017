/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:46:13 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/16 23:42:48 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'j')
			str[i] = str[i] + 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] = str[i] - 10;
		else if (str[i] >= 'A' && str[i] <= 'J')
			str[i] = str[i] + 16;
		else if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}
