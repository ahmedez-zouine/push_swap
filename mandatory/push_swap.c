/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:56:55 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 03:35:33 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(t_node *stack, int (*comp)(int, int))
{
	t_node	*tmp;

	if (!stack)
		return (0);
	tmp = stack;
	while (tmp->next)
	{
		if (comp(tmp->value, tmp->next->value))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_3_numbers(t_stacks *stacks)
{
	int	min;
	int	max;

	min = get_min(stacks->stack_a);
	max = get_max(stacks->stack_a);
	if (stacks->stack_a->next->value == min
		&& stacks->stack_a->next->next->value == max)
		sa(stacks);
	else if (stacks->stack_a->value == max
		&& stacks->stack_a->next->next->value == min)
	{
		sa(stacks);
		rra(stacks);
	}
	else if (stacks->stack_a->value == max
		&& stacks->stack_a->next->value == min)
		ra(stacks);
	else if (stacks->stack_a->value == min
		&& stacks->stack_a->next->value == max)
	{
		sa(stacks);
		ra(stacks);
	}
	else
		rra(stacks);
}

void	sort_5_numbers(t_stacks *stacks)
{
	int	min_index;
	int	min;
	int	middle;

	while (get_stack_length(stacks->stack_a) != 3)
	{
		min = get_min(stacks->stack_a);
		min_index = get_min_index(stacks->stack_a);
		middle = get_stack_length(stacks->stack_a) / 2;
		if (stacks->stack_a->value == min)
			pb(stacks);
		else if (min_index > middle)
			rra(stacks);
		else
			ra(stacks);
	}
	if (!is_stack_sorted(stacks->stack_a, ascending))
		sort_3_numbers(stacks);
	pa(stacks);
	pa(stacks);
}
