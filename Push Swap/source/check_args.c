/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:51:27 by bkaygusu          #+#    #+#             */
/*   Updated: 2023/01/13 14:51:28 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

static int	ft_isrepeat(int num, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	if (!num[i])
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int ac, char **av)
{
	int		i;
	long	num;
	char	**tab;

	i = 0;
	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
	{
		i = 1;
		tab = av;
	}
	while (tab[i])
	{
		num = ft_atoi(tab[i]);
		if (!ft_isnum(tab[i]))
			ft_error("Error");
		if (ft_isrepeat(num, tab, i))
			ft_error("Error");
		if (num < -2147483648 || num > 2147483647)
			ft_error("Error");
		i++;
	}
	if (ac == 2)
		ft_free_str(tab);
}
