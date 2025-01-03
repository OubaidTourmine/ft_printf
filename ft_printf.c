/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:43:35 by outourmi          #+#    #+#             */
/*   Updated: 2024/12/21 15:46:06 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char a, va_list args)
{
	int		count;
	void	*ptr;

	count = 0;
	if (a == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (a == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (a == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr == NULL)
			return (ft_putstr("(nil)"));
		count += ft_putstr("0x");
		count += ft_p((unsigned long)ptr);
	}
	else if (a == 'd' || a == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (a == 'u')
		count += ft_uns_dec(va_arg(args, unsigned int));
	else if (a == 'x')
		count += ft_low_hex(va_arg(args, unsigned int));
	else if (a == 'X')
		count += ft_up_hex(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
