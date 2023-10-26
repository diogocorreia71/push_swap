/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:53 by diodos-s          #+#    #+#             */
/*   Updated: 2023/10/20 11:25:32 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_node **head)
{
    if (!head || !*head || !(*head)->next)
        return;

    t_node *current = *head;
    t_node *nextNode = current->next;

    current->next = nextNode->next;
    if (nextNode->next)
        nextNode->next->prev = current;

    nextNode->next = current;
    current->prev = nextNode;

    *head = nextNode;
}


void	ss(t_node **a, t_node **b, bool checker)
{
	swap(a);
	swap(b);
	if (!checker)
		write(1, "ss\n", 3);
}

void	sb(t_node **b, bool checker)
{
	swap(b);
	if (!checker)
		write(1, "sb\n", 3);
}

void	sa(t_node **a, bool checker)
{
	swap(a);
	if (!checker)
		write(1, "sa\n", 3);
}
