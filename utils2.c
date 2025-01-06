/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:40:20 by outourmi          #+#    #+#             */
/*   Updated: 2024/12/21 15:46:24 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_up_hex(unsigned int n)
{
	char	*hex_dec;
	int		count;

	hex_dec = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_up_hex(n / 16);
		count += ft_up_hex(n % 16);
	}
	else
		count += ft_putchar(hex_dec[n]);
	return (count);
}

int	ft_low_hex(unsigned int n)
{
	char	*hex_dec;
	int		count;

	hex_dec = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_low_hex(n / 16);
		count += ft_low_hex(n % 16);
	}
	else
		count += ft_putchar(hex_dec[n]);
	return (count);
}

int	ft_p(unsigned long n)
{
	char	*hex_dec;
	int		count;

	hex_dec = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_p(n / 16);
		count += ft_p(n % 16);
	}
	else
		count += ft_putchar(hex_dec[n]);
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((char)c != s[i])
	{
		if (!s[i])
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}
