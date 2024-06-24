/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalaty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:27:37 by sdalaty           #+#    #+#             */
/*   Updated: 2024/06/22 10:25:48 by sdalaty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printperc(void)
{
	write (1, "%", 1);
	return (1);
}

void	ft_putnbru(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbru(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	ft_printuns(unsigned int n)
{
	int				i;
	unsigned int	nb;

	i = 1;
	nb = n;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbru(n);
	return (i);
}
