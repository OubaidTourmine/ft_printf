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
