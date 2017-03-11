/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 17:51:46 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/11 19:09:36 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strlen(char *str)
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

	str_rev = 0;
	j = 0;
	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		str_rev[j] = str[i];
		j++;
		i--;
	}
	*str = *str_rev;
	return (str_rev);
}
