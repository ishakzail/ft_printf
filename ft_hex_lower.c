/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:56:14 by izail             #+#    #+#             */
/*   Updated: 2021/12/15 20:15:09 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int num)
{
	int	len;

	len = 0;
	if (num < 0)
		len++;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_hex_lower(unsigned int n)
{
	if (n < 16)
	{
		ft_putchar(LOW_HEX[n]);
	}
	else
	{
		ft_hex_lower(n / 16);
		ft_hex_lower(n % 16);
	}
	return (ft_len(n));
}
