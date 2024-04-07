/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:50:23 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 07:36:58 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (0);
	node->value = value;
	node->next = 0;
	return (node);
}

void	push(t_node **top, t_node *new_node)
{
	if (!*top)
		*top = new_node;
	else
	{
		new_node->next = *top;
		*top = new_node;
	}
}

t_node	*pop(t_node **stack)
{
	t_node	*top;

	top = *stack;
	if (!top)
		return (0);
	*stack = top->next;
	top->next = 0;
	return (top);
}

int	get_stack_length(t_node *stack)
{
	t_node	*tmp;
	int		size;

	tmp = stack;
	size = 0;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

int	get_min_index(t_node *stack)
{
	int		i;
	int		min;
	t_node	*tmp;
	int		index;

	if (!stack)
		return (-1);
	i = 0;
	tmp = stack;
	min = stack->value;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}
