/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:04:39 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 16:19:27 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"

int			ft_atoi(char *str)
{
	int	i;
	int	negatif;
	int	nb;

	i = 0;
	negatif = 0;
	nb = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == 45)
		negatif = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10;
		nb = nb + ((int)str[i] - 48);
		i++;
	}
	if (negatif == 1)
		return (-nb);
	else
		return (nb);
}

t_perso		*parse_perso(char **str)
{
	t_perso *ret_perso;
	char	*beg;
	char	*f;

	ret_perso = malloc(sizeof(t_perso));
	ret_perso->age = ft_atoi(*str);
	while ((**str) != '|')
		(*str)++;
	(*str)++;
	beg = *str;
	while ((**str) != ';' && (**str) != '\0')
		(*str)++;
	ret_perso->name = malloc((*str - beg) * sizeof(char));
	f = ret_perso->name;
	while (beg != *str)
		*(ret_perso->name++) = *beg++;
	ret_perso->name = f;
	(*str)++;
	return (ret_perso);
}

t_perso		**ft_decrypt(char *str)
{
	char	*beg;
	int		len;
	int		progress;
	t_perso **t_perso_arr;

	progress = 0;
	len = 0;
	beg = str;
	while (*str != '\0')
	{
		if (*str == '|')
			len++;
		str++;
	}
	t_perso_arr = (t_perso**)malloc(len * sizeof(t_perso*));
	while (progress < len)
	{
		*(t_perso_arr + progress) = parse_perso(&beg);
		progress++;
	}
	return (t_perso_arr);
}
