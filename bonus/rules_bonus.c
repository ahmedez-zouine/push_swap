/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:40:48 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 00:41:24 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (! *stack || get_stack_length(*stack) == 1)
		return ;
	first = pop(stack);
	second = pop(stack);
	push(stack, first);
	push(stack, second);
}

void	sa(t_stacks *stacks)
{
	swap(&stacks->stack_a);
}

void	sb(t_stacks *stacks)
{
	swap(&stacks->stack_b);
}

void	ss(t_stacks *stacks)
{
	swap(&stacks->stack_a);
	swap(&stacks->stack_b);
}
