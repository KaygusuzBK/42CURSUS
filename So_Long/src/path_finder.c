/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:11:51 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/11/25 16:03:44 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	recur_func(int **int_map, t_data *list, int x, int y)
{
	if (list->map[y][x] == 'P' || list->map[y][x] == 'C')
		list->i_map.read_count++;
	if (list->map[y][x + 1] != '1' && int_map[y][x + 1] < 1)
	{
		int_map[y][x + 1] = int_map[y][x] + 1;
		list->i_map.r = recur_func(int_map, list, x + 1, y);
	}
	if (list->map[y + 1][x] != '1' && int_map[y + 1][x] < 1)
	{
		int_map[y + 1][x] = int_map[y][x] + 1;
		list->i_map.b = recur_func(int_map, list, x, y + 1);
	}
	if (list->map[y][x - 1] != '1' && int_map[y][x - 1] < 1)
	{
		int_map[y][x - 1] = int_map[y][x] + 1;
		list->i_map.l = recur_func(int_map, list, x - 1, y);
	}
	if (list->map[y - 1][x] != '1' && int_map[y - 1][x] < 1)
	{
		int_map[y - 1][x] = int_map[y][x] + 1;
		list->i_map.t = recur_func(int_map, list, x, y - 1);
	}
	if ((list->i_map.r || list->i_map.l || list->i_map.b || list->i_map.t))
		return (1);
	return (0);
}

static void	print(t_data *list, int **int_map, int print_active)
{
	int	x;
	int	k;

	x = 0;
	k = 0;
	if (print_active)
	{
		if (list->i_map.read_count == list->coin_count + 1)
			ft_printf("\n\n>>>> MAP OK\n");
		ft_printf("\n>>>>Toplanan ulaşılabilir: %d", list->i_map.read_count);
		ft_printf("\n>>>>Toplam Hareket: %d", list->i_map.step_count);
		ft_printf("\n\n↓ VIRTUAL MAP ↓\n");
		while (x < list->map_height)
		{
			k = 0;
			ft_printf("\n");
			while (k < list->map_width)
			{
				ft_printf("%d", int_map[x][k]);
				k++;
			}
			x++;
		}
		ft_printf("\n\n");
	}	
}

static void	int_map_free(int **int_map, t_data *list)
{
	int	i;

	i = 0;
	while (i < list->map_height)
	{
		free(int_map[i]);
		i++;
	}
	free(int_map);
}

void	placeholder(t_data *list, int x, int y, int print_active)
{
	int	**int_map;
	int	i;
	int	j;

	i = 0;
	j = 0;
	int_map = (int **)malloc(sizeof(int *) * list->map_height);
	while (i < list->map_height)
	{
		int_map[i] = (int *)malloc(sizeof(int) * list->map_width);
		j = 0;
		while (j < list->map_width)
		{
			int_map[i][j] = 0;
			j++;
		}
		i++;
	}	
	int_map[y][x] = 1;
	list->i_map.read_count = 0;
	list->i_map.step_count = 0;
	recur_func(int_map, list, x, y);
	print(list, int_map, print_active);
	int_map_free(int_map, list);
}
