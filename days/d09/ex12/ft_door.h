/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:01:11 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/17 16:02:46 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

# define FT_DOOR_H

typedef enum    e_bool
{
	FALSE,
	TRUE
}               t_bool;

typedef enum    e_state
{
	CLOSE,
	OPEN
}               t_state;

typedef struct  s_door
{
	t_state     state;
}               t_door;

#endif
