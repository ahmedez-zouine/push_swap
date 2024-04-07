/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:00:54 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 01:24:06 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *counter)
{
	if (nb == INT_MIN)
		ft_putstr("-2147483648", counter);
	else if (nb < 0)
	{
		ft_putchar('-', counter);
		nb *= -1;
		ft_putnbr(nb, counter);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, counter);
		ft_putnbr(nb % 10, counter);
	}
	else
		ft_putchar(nb + 48, counter);
}
