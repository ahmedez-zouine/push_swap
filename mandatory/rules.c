/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:23:15 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 07:27:55 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_printf("sa\n");
}

void	sb(t_stacks *stacks)
{
	swap(&stacks->stack_b);
	ft_printf("sb\n");
}

void	ss(t_stacks *stacks)
{
	swap(&stacks->stack_a);
	swap(&stacks->stack_b);
	ft_printf("ss\n");
}

int	get_max_index(t_node *stack)
{
	int		i;
	int		max;
	t_node	*tmp;
	int		index;

	if (!stack)
		return (-1);
	i = 0;
	tmp = stack;
	max = stack->value;
	while (tmp)
	{
		if (tmp->value > max)
		{
			max = tmp->value;
			index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}
