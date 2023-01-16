/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:51:40 by bkaygusu          #+#    #+#             */
/*   Updated: 2023/01/13 14:51:41 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag, int i)
{
	t_list	*head;

	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
			{
				while (i-- > 0)
					ra(stackA);
			}
			else
			{
				while ((5 - flag) > i)
				{
					rra(stackA);
					i++;
				}
			}
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}
