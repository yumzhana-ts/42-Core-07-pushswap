/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:05:31 by ytsyrend          #+#    #+#             */
/*   Updated: 2024/01/18 19:05:34 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/push_swap.h"

void	sort_three(t_list **stack_a)
{
	t_list	*biggest_node;

	biggest_node = find_max(*stack_a);
	if (biggest_node == *stack_a)
		ra(stack_a, false);
	else if ((*stack_a)->next == biggest_node)
		rra(stack_a, false);
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		sa(stack_a);
}

static void	move_b_to_a(t_list **a, t_list **b)
{
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b);
}

static void	min_on_top(t_list **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_list **stack_a, t_list **stack_b)
{
	int	len_a;

	len_a = stack_len(*stack_a);
	if (len_a-- > 3 && !sort_control(*stack_a))
		pb(stack_b, stack_a);
	if (len_a-- > 3 && !sort_control(*stack_a))
		pb(stack_b, stack_a);
	while (len_a-- > 3 && !sort_control(*stack_a))
	{
		init_nodes_a(*stack_a, *stack_b);
		move_a_to_b(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		init_nodes_b(*stack_a, *stack_b);
		move_b_to_a(stack_a, stack_b);
	}
	current_index(*stack_a);
	min_on_top(stack_a);
}
