/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:30:38 by diodos-s          #+#    #+#             */
/*   Updated: 2023/10/04 14:51:45 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack_node
{
	int	value;
	int current_position;
	int final_index;
	int push_price;
	int above_median;
	int cheapest;
	struct s_stack_node *target_node;
	struct s_stack_node *next;
	struct s_stack_node *prev;
}	t_stack_node;

#endif