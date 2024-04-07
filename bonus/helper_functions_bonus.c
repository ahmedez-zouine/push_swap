/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 00:00:55 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 00:01:43 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error_log(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

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
