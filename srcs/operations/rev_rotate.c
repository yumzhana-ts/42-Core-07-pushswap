/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:00:38 by ytsyrend          #+#    #+#             */
/*   Updated: 2024/01/18 19:00:42 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/push_swap.h"

static void	rev_rotate(t_list **stack)
{
	t_list	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	last_node->prev->next = NULL;
	last_node->next = *stack;
	last_node->prev = NULL;
	*stack = last_node;
	last_node->next->prev = last_node;
}

void	rra(t_list **a, bool print)
{
	rev_rotate(a);
	if (!print)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **b, bool print)
{
	rev_rotate(b);
	if (!print)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		ft_putstr_fd("rrr\n", 1);
}
