/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:56:14 by izail             #+#    #+#             */
/*   Updated: 2021/12/13 13:56:16 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_len(unsigned int num)
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

int   ft_hex_lower(unsigned int n)
{   
    char    *hex;

    hex = "0123456789abcdef";
    if (n < 16)
    {
        ft_putchar(hex[n]);
    }
    else
    {
        ft_hex_lower(n / 16);
        ft_hex_lower(n % 16);
    }
    return (ft_len(n));
}