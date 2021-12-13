/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:04:01 by izail             #+#    #+#             */
/*   Updated: 2021/12/11 14:13:40 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_if(va_list args, const char *fmt)
{
	const char *str;
	char		c;
	int			d;
	if (*fmt == '%')
		ft_putchar('%');
	else if (*fmt == 'd')
	{
		d = va_arg(args, int);
		ft_putnbr(d);
	}
	else if (*fmt == 'c')
	{
		c = va_arg(args, int);
		ft_putchar(c);
	}
	else if (*fmt == 's')
	{
		str = va_arg(args,const char *);
		ft_putstr(str);
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;

	va_start(args, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			ft_if(args,fmt);
		}
		fmt++;
	}
	va_end(args);	
	return (1);
}
int main()
{
	
	ft_printf("%d%s%c",42," Bonjour ! ", 'e');
	//ft_putchar('c');
	return (0);
}
