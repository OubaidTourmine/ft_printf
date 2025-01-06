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
