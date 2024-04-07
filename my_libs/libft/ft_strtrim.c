/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:52:03 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 07:30:13 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i])
	{
		if (!char_in_set(set, s1[i]))
			break ;
		i++;
	}
	while (j >= i)
	{
		if (!char_in_set(set, s1[j]))
			break ;
		j--;
	}
	return (ft_substr(s1, i, j - i + 1));
}
