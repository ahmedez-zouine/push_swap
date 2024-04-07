/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:39:58 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 00:40:28 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rr(t_stacks *stacks)
{
	rotate(&stacks->stack_a);
	rotate(&stacks->stack_b);
}

void	reverse_rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*last;

	if (!*stack || get_stack_length(*stack) == 1)
		return ;
	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = 0;
	push(stack, last);
}

void	rra(t_stacks *stacks)
{
	reverse_rotate(&stacks->stack_a);
}

void	rrb(t_stacks *stacks)
{
	reverse_rotate(&stacks->stack_b);
}

void	rrr(t_stacks *stacks)
{
	reverse_rotate(&stacks->stack_a);
	reverse_rotate(&stacks->stack_b);
}
