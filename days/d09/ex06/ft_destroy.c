/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:47:03 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 02:42:41 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	char *three_d;
	char **two_d;

	while (*factory != 0)
	{
		while (**factory != 0)
		{
			three_d = **factory;
			(*factory)++;
			free(three_d);
		}
		two_d = *factory;
		factory++;
		free(two_d);
	}
	free(factory);
}
