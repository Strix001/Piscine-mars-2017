/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 22:05:58 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/19 14:25:58 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match((s1 + 1), s2) || match(s1, (s2 + 1)));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, (s2 + 1)));
	if (*s1 == *s2 && *s1 != '\0')
		return (match((s1 + 1), (s2 + 1)));
	if (*s1 == *s2 && *s1 == '\0')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	return (match(argv[1], argv[2]));
}
