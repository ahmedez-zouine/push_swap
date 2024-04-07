/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:24:00 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 05:19:43 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	*bubble_sort(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
	return (tab);
}

int	ascending(int a, int b)
{
	return (a > b);
}

int	descending(int a, int b)
{
	return (a < b);
}

int	*get_sorted_array(char **argv, int size)
{
	int	i;
	int	*tab;

	tab = (int *) malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	i = 0;
	while (i < size)
	{
		tab[i] = ft_atoi(argv[i]);
		i++;
	}
	return (bubble_sort(tab, size));
}
