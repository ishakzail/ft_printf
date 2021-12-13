/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:55:54 by izail             #+#    #+#             */
/*   Updated: 2021/12/13 13:55:57 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int ft_len(int num)
// {
// 	int	len;

// 	len = 0;
// 	if (num == 0)
// 		return (1);
// 	while (num != 0)
// 	{
// 		len++;
// 		num = num / 16;
// 	}
// 	return (len);
// }

int ft_hex_upper(int n)
{
    int len;
    char    *hex;

    len = 0;
    hex = "0123456789ABCDEF";
    if (n < 16)
        len += ft_putchar(hex[n]);
    else
    {
        ft_hex_upper(n % 16);
        ft_hex_upper(n / 16);
    }
    return (len);
}