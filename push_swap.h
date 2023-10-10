/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:38 by diodos-s          #+#    #+#             */
/*   Updated: 2023/10/10 10:58:44 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>

typedef struct s_stack_node
{
	int	value;
	int current_position;
	int final_index;
	int push_price;
	bool above_median;
	bool cheapest;
	struct s_stack_node *target_node;
	struct s_stack_node *next;
	struct s_stack_node *prev;
}	t_stack_node;

# define int_max 2147483647
# define int_min -2147483648
# define long_max +9223372036854775807

void	stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
bool	stack_sorted(t_stack_node *stack);
int		stack_len(t_stack_node *stack);
void	sa(t_stack_node **a, bool checker);
void	tiny_sort(t_stack_node **a);
t_stack_node	*find_last_node(t_stack_node *head);
void	ra(t_stack_node **a, bool checker);
static void	reverse_rotate(t_stack_node **stack);
void	rra(t_stack_node **a, bool checker);
void	handle_five(t_stack_node **a, t_stack_node **b);
void	init_nodes(t_stack_node *a, t_stack_node *b);
t_stack_node	*find_smallest(t_stack_node *stack);
void	push_swap(t_stack_node **a, t_stack_node **b);
void	set_current_position(t_stack_node *stack);
static void	push(t_stack_node **dest, t_stack_node **src);
void	pa(t_stack_node **a, t_stack_node **b, bool checker);
void	pb(t_stack_node **b, t_stack_node **a, bool checker);
void	rra(t_stack_node **a, bool checker);
void	rrb(t_stack_node **b, bool checker);
void	rrr(t_stack_node **a, t_stack_node **b, bool checker);
void	rb(t_stack_node **b, bool checker);
void	rr(t_stack_node **a, t_stack_node **b, bool checker);
t_stack_node	*return_cheapest(t_stack_node *stack);
int		error_syntax(char *str_nbr);
void	error_free(t_stack_node **a, char **argv, bool flag_argc_2);
int	error_repetition(t_stack_node *a, int nbr);
void	append_node(t_stack_node **stack, int nbr);
void	free_matrix(char **argv);
void	free_stack(t_stack_node **stack);
void	finish_rotation(t_stack_node **stack, t_stack_node *top_node, char stack_name);

#endif