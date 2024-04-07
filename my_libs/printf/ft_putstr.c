/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:48:34 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 01:24:27 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *counter)
{
	int	strlen;

	if (!s)
		s = "(null)";
	strlen = ft_strlen(s);
	write(1, s, strlen);
	*counter += strlen;
}
