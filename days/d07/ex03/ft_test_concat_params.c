/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 00:33:01 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/27 12:09:07 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
		size++;
	dest[size] = '\n';
	size++;
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int	i;

	i = 2;
	if (argc == 1)
	{
		argv[0] = "\0";
		return (argv[0]);
	}
	while (argv[i])
	{
		argv[i] = ft_strcat(argv[i - 1], argv[i]);
		i++;
	}
	return (argv[i - 1]);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
