/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:04:01 by izail             #+#    #+#             */
/*   Updated: 2021/12/15 22:14:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_if(va_list args, const char *fmt)
{
	int	len;

	len = 0;
	if (*fmt == '%')
		len += ft_putchar('%');
	else if (*fmt == 'd' || *fmt == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (*fmt == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (*fmt == 's')
		len += ft_putstr(va_arg(args, const char *));
	else if (*fmt == 'X')
		len += ft_hex_upper(va_arg(args, unsigned int));
	else if (*fmt == 'x')
		len += ft_hex_lower(va_arg(args, unsigned int));
	else if (*fmt == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));
	else if (*fmt == 'u')
		len += ft_putunsigned(va_arg(args, unsigned int));
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			len += ft_if(args, fmt);
		}
		else
			len += ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return (len);
}
