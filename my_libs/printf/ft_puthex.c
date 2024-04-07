/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:02:49 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 01:24:33 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int isupper, int *counter)
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
		ft_puthex(n / 16, isupper, counter);
		ft_puthex(n % 16, isupper, counter);
	}
}
