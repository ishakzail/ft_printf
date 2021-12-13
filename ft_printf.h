/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:35:44 by izail             #+#    #+#             */
/*   Updated: 2021/12/12 19:36:52 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdarg.h>

int ft_printf(const char *fmt, ...);
int ft_putstr(const char *str);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_hex_upper(int n);
int ft_hex_lower(int n);


#endif
