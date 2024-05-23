/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:54:27 by ytsyrend          #+#    #+#             */
/*   Updated: 2024/01/18 18:54:33 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>  //To define MIN and MAX macros
# include <stdbool.h> //To use bool flags, e.g, to print or not to print
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_list	*target_node;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

void	init_stack_a(t_list **a, char **argv, bool tmp);
t_list	*find_max(t_list *stack);
void	print_list(t_list *stack);
char	**mod_split(char *s, char c);
int		stack_len(t_list *stack);
int		sort_control(t_list *stack_a);
void	sort_stacks(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	rra(t_list **a, bool print);
void	rrb(t_list **b, bool print);
void	rrr(t_list **a, t_list **b, bool print);
void	ra(t_list **a, bool print);
void	rb(t_list **b, bool print);
void	rr(t_list **a, t_list **b, bool print);
void	pb(t_list **b, t_list **a);
void	pa(t_list **a, t_list **b);
t_list	*find_last(t_list *stack);
t_list	*find_min(t_list *stack);
void	current_index(t_list *stack);
void	set_target_a(t_list *a, t_list *b);
void	set_cheapest(t_list *stack);
void	init_nodes_a(t_list *a, t_list *b);
void	init_nodes_b(t_list *a, t_list *b);
void	move_a_to_b(t_list **a, t_list **b);
t_list	*get_cheapest(t_list *stack);
void	prep_for_push(t_list **stack,
			t_list	*top_node, char stack_name);
void	free_stack(t_list **stack);
void	free_errors(t_list **a, bool tmp, char **argv);
void	ft_free_array_of_strings(char **tmp);
int		error_duplicate(t_list *a, int n);
int		error_syntax(char *str_n);
#endif
