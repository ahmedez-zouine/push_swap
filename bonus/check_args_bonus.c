/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:57:46 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/03/31 23:58:02 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_stack(t_node **stack)
{
	t_node	*tmp;

	while (*stack)
	{
		tmp = pop(stack);
		free(tmp);
	}
}

static int	check_if_elem_in_stack(t_node *stack, int value)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->value == value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	check_for_duplicates(t_node	*stack)
{
	t_node	*dups;
	t_node	*tmp;	
	t_node	*new;

	tmp = stack;
	dups = 0;
	while (tmp)
	{
		if (check_if_elem_in_stack(dups, tmp->value))
		{
			free_stack(&dups);
			return (1);
		}
		else
		{
			new = new_node(tmp->value);
			push(&dups, new);
		}
		tmp = tmp->next;
	}
	free_stack(&dups);
	return (0);
}

t_node	*array_to_stack(char **arr)
{
	t_node	*stack;
	t_node	*new;
	int		end;
	long	n;

	stack = 0;
	end = 0;
	while (arr[end])
		end++;
	end--;
	while (end >= 0)
	{
		n = ft_atoi_v2(arr[end], arr, stack);
		new = new_node(n);
		if (!new)
			error_log();
		push(&stack, new);
		end--;
	}
	free_args(arr);
	return (stack);
}

char	**get_args(char **argv, int n)
{
	char	*str;
	int		i;
	char	*arg;
	char	**args;

	i = 0;
	str = 0;
	while (i < n)
	{
		arg = ft_strtrim(argv[i], " ");
		if (!arg[0])
		{
			free(arg);
			free(str);
			error_log();
		}
		arg = ft_strjoin(arg, " ");
		str = ft_strjoin(str, arg);
		free(arg);
		i++;
	}
	args = ft_split(str, ' ');
	free(str);
	return (args);
}
