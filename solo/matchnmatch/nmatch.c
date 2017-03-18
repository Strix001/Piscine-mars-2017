/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 22:43:23 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/18 22:44:19 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch((s1 + 1), s2) + nmatch (s1, (s2 + 1)));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, (s2 + 1)));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (nmatch((s1 + 1), (s2 + 1)));
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	return (nmatch(argv[1], argv[2]));
}
