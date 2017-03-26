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

void	ft_putchar(char c); //afficher character
void	ft_putstr(char *c); //afficher chaine de character
void	ft_putnbr(int nb); //afficher nombre
int		main(int argc, char **argv); //erreur ou allocate
int		allocate(void); //malloc; translate ou find_result; free
char	*translate(char *tab); //retourne 0 si i = 0 ou si tab[i] = \0
int		check(char *tab); //verifie que les characters recus rentre dans les attendus sinon retourne error
int		find_y(char *tab, int y); //compte le nombre de \n pour le nombre de lignes
int		find_x(char *tab, int x); //compte le nombre de characters jusqu au \n pour le nombre de colonne
int		find_result(char *tab); //check tab puis repartie les choix entre 0, 1 ou multi_result si character alpha
void	multi_result(char *tab, int x, int y); //renvoie vers les differentes options
void	option_a(int x, int y); //colle 2, 3 et 4
void	option_b(char *tab, int x, int y); //colle 2 ou 3 et 4
void	option_c(char *tab, int x, int y); //colle 3 ou 2 et 4
void	option_d(char *tab, int x, int y); //colle 2 ou 3 ou 4
void	error(void); //renvoie "aucune"
void	print_result(int x, int y, int a); //imprime


#endif
