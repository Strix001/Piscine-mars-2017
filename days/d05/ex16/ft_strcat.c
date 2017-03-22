/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 22:16:58 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/21 17:37:54 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
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
