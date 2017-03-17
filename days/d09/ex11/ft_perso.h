/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:00:31 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 16:31:56 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H

# define FT_PERSO_H

# define SAVE_AUSTIN_POWER 1

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	int		profession;
}				t_perso;

#endif
