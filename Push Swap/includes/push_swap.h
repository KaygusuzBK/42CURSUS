/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:52:19 by bkaygusu          #+#    #+#             */
/*   Updated: 2023/01/13 14:52:32 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct stack_list
{
	char				c;
	int					content;
	int					index;
	struct stack_list	*next;
}						t_list;
//source
void	ft_error(char *str);
void	check_args(int ac, char **av);
void	ft_free_str(char **str);
void	free_stack(t_list **stack);
void	index_stack(t_list **stack);
int		is_sorted(t_list **stack);
void	radix_sort(t_list **stack_a, t_list **stack_b);

//operations
int		reverserotate(t_list **stack);
int		push(t_list **dest, t_list **source);
int		pb(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		swap(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rb(t_list **stack_b);
int		ra(t_list **stack_a);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
//libft
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
long	ft_atoi(const char *str);
void	ft_putendl_fd(char *s, int fd);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
char	**ft_split(const char *s, char c);

//ft_sort
void	ft_small_sort(t_list **stackA, t_list **stackB);
void	ft_other_three(t_list **stackA, int *nums);
void	ft_sort_three(t_list **stackA);
void	ft_sourt_four(t_list **stackA, t_list **stackB);
void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag, int i);
void	ft_sort_five(t_list **stackA, t_list **stackB);
#endif
