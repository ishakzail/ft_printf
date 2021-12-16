/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:35:44 by izail             #+#    #+#             */
/*   Updated: 2021/12/15 20:22:08 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<stdarg.h>

# define LOW_HEX "0123456789abcdef"
# define UP_HEX  "0123456789ABCDEF"

int	ft_printf(const char *fmt, ...);
int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_hex_upper(unsigned int n);
int	ft_hex_lower(unsigned int n);
int	ft_putptr(unsigned long long ptr);
int	ft_putunsigned(unsigned int nbr);

#endif
