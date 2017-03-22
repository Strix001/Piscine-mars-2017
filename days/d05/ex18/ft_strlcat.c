/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 03:15:59 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/21 17:41:10 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_end;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (dest[i] && i < size)
		i++;
	dest_end = i;
	while (src[i - dest_end] && i < size - 1)
	{
		dest[i] = src[i - dest_end];
		i++;
	}
	if (dest_end < size)
		dest[i] = '\0';
	return (dest_end + j);
}
