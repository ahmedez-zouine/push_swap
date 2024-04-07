/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:14:47 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 07:27:58 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks *stacks)
{
	t_node	*top;

	if (!stacks->stack_b)
		return ;
	top = pop(&stacks->stack_b);
	push(&stacks->stack_a, top);
	ft_printf("pa\n");
}

void	pb(t_stacks *stacks)
{
	t_node	*top;

	if (!stacks->stack_a)
		return ;
	top = pop(&stacks->stack_a);
	push(&stacks->stack_b, top);
	ft_printf("pb\n");
}

void	rotate(t_node **stack)
{
	t_node	*top;
	t_node	*tmp;

	if (!*stack || get_stack_length(*stack) == 1)
		return ;
	top = pop(stack);
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = top;
}

void	ra(t_stacks *stacks)
{
	rotate(&stacks->stack_a);
	ft_printf("ra\n");
}

void	rb(t_stacks *stacks)
{
	rotate(&stacks->stack_b);
	ft_printf("rb\n");
}
