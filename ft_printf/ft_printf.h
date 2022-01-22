/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocky <jrocky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:00:15 by jrocky            #+#    #+#             */
/*   Updated: 2022/01/10 18:03:15 by jrocky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

unsigned int	ft_hex_putnbr_upp(unsigned long long hex, unsigned int count);
unsigned int	ft_hex_putnbr_low(unsigned long long hex, unsigned int count);
unsigned int	ft_putnbr(int n, unsigned int count);
unsigned int	ft_putnbr_uns(unsigned int n, unsigned int count);
unsigned int	ft_check_opt(va_list params, const char *arg);
unsigned int	ft_putstr(char *s);
int				ft_putchar(char c);
int				ft_putptr(uintptr_t ptr);
int				ft_printf(const char *arg, ...);

#endif
