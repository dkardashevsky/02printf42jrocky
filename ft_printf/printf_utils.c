/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocky <jrocky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:00:36 by jrocky            #+#    #+#             */
/*   Updated: 2022/01/10 18:04:27 by jrocky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

unsigned int	ft_putstr(char *s)
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	else
	{
		i = write(1, "(null)", 6);
	}
	return (i);
}

unsigned int	ft_putnbr(int n, unsigned int count)
{
	unsigned int	copy;
	unsigned int	kek;

	if (n < 0)
	{
		count ++;
		ft_putchar('-');
		kek = (unsigned int)(n * -1);
	}
	else
		kek = (unsigned int)n;
	copy = kek;
	while (copy > 0)
	{
		count++;
		copy /= 10;
	}
	if (kek >= 10)
		ft_putnbr(kek / 10, 0);
	ft_putchar((char)(kek % 10 + 48));
	if (n == 0)
		count = 1;
	return (count);
}

unsigned int	ft_putnbr_uns(unsigned int n, unsigned int count)
{
	unsigned int	n_c;

	if (n < 0)
	{
		count++;
		ft_putchar('-');
		n *= -1;
	}
	n_c = n;
	while (n_c > 0)
	{
		count++;
		n_c /= 10;
	}
	if (n >= 10)
	{
		ft_putnbr_uns(n / 10, 0);
	}
	ft_putchar((char)(n % 10 + 48));
	if (n == 0)
		count = 1;
	return (count);
}

int	ft_putptr(uintptr_t ptr)
{
	int			sum;
	uintptr_t	kek;

	sum = 2;
	write (1, "0x", 2);
	kek = (uintptr_t)((void *) ptr);
	return (ft_hex_putnbr_low(kek, 0) + 2);
}
