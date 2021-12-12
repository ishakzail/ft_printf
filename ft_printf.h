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

int	    ft_printf(const char *fmt, ...);
void    ft_putstr(const char *str);
void    ft_putchar(char c);
void	ft_putnbr(int n);


#endif
