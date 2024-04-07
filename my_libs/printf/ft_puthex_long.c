/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:23:30 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 01:24:36 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_long(unsigned long n, int isupper, int *counter)
{
	char			*str_base;

	if (isupper)
		str_base = "0123456789ABCDEF";
	else
		str_base = "0123456789abcdef";
	if (n < 16)
		ft_putchar(str_base[n], counter);
	else
	{
		ft_puthex_long(n / 16, isupper, counter);
		ft_puthex_long(n % 16, isupper, counter);
	}
}
