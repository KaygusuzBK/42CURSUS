/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:55:12 by bkaygusu          #+#    #+#             */
/*   Updated: 2023/01/13 14:55:13 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB)
{
	(void)stackB;
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			sa(stackA);
	}
	else if (ft_lstsize(*stackA) == 3)
		ft_sort_three(stackA);
	else if (ft_lstsize(*stackA) == 4)
		ft_sourt_four(stackA, stackB);
	else if (ft_lstsize(*stackA) == 5)
		ft_sort_five(stackA, stackB);
}
