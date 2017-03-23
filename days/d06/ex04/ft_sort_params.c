/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbergon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 08:10:43 by clbergon          #+#    #+#             */
/*   Updated: 2017/03/23 17:02:12 by clbergon         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		arg;
	char	*tmp;

	i = 1;
	arg = argc - 1;
	tmp = 0;
	while (arg > 1)
	{
		if (ft_strcmp(argv[arg], argv[arg - 1]) < 0)
		{
			tmp = argv[arg - 1];
			argv[arg - 1] = argv[arg];
			argv[arg] = tmp;
			arg = argc - 1;
		}
		else
			arg--;
	}
	while (argv[i] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
