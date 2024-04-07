/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:34:06 by aez-zoui          #+#    #+#             */
/*   Updated: 2024/04/01 01:35:42 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

void				ft_putchar(const char c, int *counter);
void				ft_putstr(const char *s, int *counter);
void				ft_putnbr(int nb, int *counter);
int					ft_printf(const char *s, ...);
void				ft_puthex(unsigned int n, int isupper, int *counter);
void				ft_puthex_long(unsigned long n, int isupper, int *counter);
void				ft_putunbr(unsigned int n, int *counter);
#endif
