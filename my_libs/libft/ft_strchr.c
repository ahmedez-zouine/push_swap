/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:54:35 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 07:29:20 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*i;

	i = (char *) s;
	while (*i)
	{
		if (*i == (char) c)
			return (i);
		i++;
	}
	if (*i == (char) c)
		return (i);
	return (NULL);
}
