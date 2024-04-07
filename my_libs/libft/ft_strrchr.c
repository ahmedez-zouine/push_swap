/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:21:41 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 07:30:09 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*p;

	i = ft_strlen(s);
	p = (char *) s;
	while (i >= 0)
	{
		if (p[i] == (char) c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}
