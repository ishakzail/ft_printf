/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:20:11 by izail             #+#    #+#             */
/*   Updated: 2021/12/15 20:23:34 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long long	nbr;
	int			len;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		len += ft_putchar('-');
	}
	if (nbr >= 10)
	{
		len += ft_putnbr(nbr / 10);
	}
	len += ft_putchar((nbr % 10) + '0');
	return (len);
}
