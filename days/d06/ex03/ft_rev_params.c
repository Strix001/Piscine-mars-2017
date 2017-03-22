/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 07:49:02 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/22 08:09:36 by clbergon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 0)
		return (-1);
	while (argv[i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
