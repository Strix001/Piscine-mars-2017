/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 03:25:58 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/25 03:38:26 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H

# define FT_COLLE_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int nb);
void	multi_result(char *tab, int x, int y);
int		find_y(char *tab, int y);
int		find_x(char *tab, int x);
int		check(char *tab);
int		find_result(char *tab);
void	option_a(int x, int y);
void	option_b(char *tab, int x, int y);
void	option_c(char *tab, int x, int y);
void	option_d(char *tab, int x, int y);
void	error(void);
void	colle00(int x, int y);
void	colle01(int x, int y);
void	colle02(int x, int y);
void	colle03(int x, int y);
void	colle04(int x, int y);
char	*translate(char *tab);
int		decode(void);
int		main(int argc, char **argv);
#endif
