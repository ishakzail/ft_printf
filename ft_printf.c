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

int	ft_printf(const char *fmt, ...)
{
	const char	*str;
	char	c;
	int		d;
	va_list	args;

	va_start(args, fmt);
	while (*fmt != '\0')
	{
		// while (*fmt != '%')
		// {
		// 	ft_putchar(*fmt);
		// 	fmt++;
		// }
		// if (*fmt == '\\')
		// 	fmt++;
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == '%')
			{
				ft_putchar('%');
				break;
			}
			else if (*fmt == 'd')
			{
				d = va_arg(args, int);
				ft_putnbr(d);
				break;
			}
			else if (*fmt == 'c')
			{
				c = va_arg(args, int);
				ft_putchar(c);
				break;
			}
			else if (*fmt == 's')
			{
				str = va_arg(args,const char *);
				ft_putstr(str);
				break;
			}
		}
		fmt++;
	}
	va_end(args);	
	return (1);
}
int main()
{
	//ft_printf("test");
	ft_printf("%d%s",42,"tt");
	//ft_putchar('c');
	return (0);
}
