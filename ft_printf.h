/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:51:54 by outourmi          #+#    #+#             */
/*   Updated: 2024/12/21 15:46:14 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_intlen(int n);
int		ft_putnbr(int nb);
int		ft_convert(char a, va_list args);
int		ft_printf(const char *format, ...);
int		ft_uns_dec(unsigned int nb);
int		ft_low_hex(unsigned int n);
int		ft_up_hex(unsigned int n);
int		ft_p(unsigned long n);
char	*ft_strchr(const char *s, int c);
#endif