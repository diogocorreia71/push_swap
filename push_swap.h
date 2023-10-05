/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:38 by diodos-s          #+#    #+#             */
/*   Updated: 2023/10/05 11:12:35 by diodos-s         ###   ########.fr       */
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

void	stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
bool	stack_sorted(t_stack_node *stack);
int		stack_len(t_stack_node *stack);
void	sa(t_stack_node **a, bool checker);
void	tiny_sort(t_stack_node **a);
t_stack_node	*find_last_node(t_stack_node *head);
void	ra(t_stack_node **a, bool checker);
static void	reverse_rotate(t_stack_node **stack);
void	rra(t_stack_node **a, bool checker);

#endif