/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:07:16 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 05:27:24 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	exit_free(char **arr, t_node *stack)
{
	free_args(arr);
	free_stack(&stack);
	error_log();
}

long	ft_atoi_v2(const char *str, char **arr, t_node *stack)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!str[i])
		exit_free(arr, stack);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			exit_free(arr, stack);
		res = res * 10 + (str[i] - '0');
		if (res * sign > INT_MAX || res * sign < INT_MIN)
			exit_free(arr, stack);
		i++;
	}
	return (sign * res);
}

void	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

int	get_max(t_node *stack)
{
	int		max;
	t_node	*tmp;

	if (!stack)
		return (-1);
	tmp = stack;
	max = stack->value;
	while (tmp)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

int	get_min(t_node *stack)
{
	int		min;
	t_node	*tmp;

	if (!stack)
		return (-1);
	tmp = stack;
	min = stack->value;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}
