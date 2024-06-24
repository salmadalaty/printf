/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdalaty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:24:47 by sdalaty           #+#    #+#             */
/*   Updated: 2024/06/22 12:01:10 by sdalaty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>

int		hex_len(unsigned int n);
int		ft_putptr(unsigned long long ptr);
int		ft_ptr_len(uintptr_t n);
int		ft_putnbr(int n);
int		check(va_list args, const char f);
int		ft_printf(const char *f, ...);
int		ft_putchar(char c);
int		ft_printuns(unsigned int n);
int		ft_putstr(char *str);
int		ft_printperc(void);
int		ft_puthex(unsigned int num, const char format);
void	ft_putnbru(unsigned int n);
void	ft_put_ptr(uintptr_t n);
void	ft_put_hex(unsigned int num, const char format);
void	ft_putchar_fd(char c, int fd);

#endif
