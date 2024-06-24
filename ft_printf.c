/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalaty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:22:50 by sdalaty           #+#    #+#             */
/*   Updated: 2024/06/22 11:24:01 by sdalaty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	check(va_list args, const char f)
{
	int	count;

	count = 0;
	if (f == 'c')
		count += ft_putchar(va_arg(args, int));
	if (f == 's')
		count += ft_putstr(va_arg(args, char *));
	if (f == 'p')
		count += ft_putptr(va_arg(args, unsigned long long));
	if (f == 'x' || f == 'X')
		count += ft_puthex(va_arg(args, unsigned int), f);
	if (f == 'i' || f == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (f == 'u')
		count += ft_printuns(va_arg(args, unsigned int));
	if (f == '%')
		count += ft_printperc();
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		count;
	int		i;	

	count = 0;
	i = 0;
	va_start(args, f);
	if (!*f)
		return (-1);
	while (f[i])
	{
		if (f[i] == '%')
		{
			count += check(args, f[i + 1]);
			i++;
		}
		else
		{
			count += ft_putchar(f[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
