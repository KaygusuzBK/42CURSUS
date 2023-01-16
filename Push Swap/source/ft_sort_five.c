/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:54:43 by bkaygusu          #+#    #+#             */
/*   Updated: 2023/01/13 14:54:46 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag, 0);
	flag = 1;
	ft_push_small_a(stackA, stackB, flag, 0);
	ft_sort_three(stackA);
	pa(stackA, stackB);
	pa(stackA, stackB);
}
