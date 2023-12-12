/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achater <achater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:05:23 by achater           #+#    #+#             */
/*   Updated: 2023/12/02 00:19:13 by achater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *);
int	count(int n);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_upper(unsigned long nb);
int	ft_low(unsigned long nb);
int	ft_putadress(unsigned long nb);
int	ft_putnbr1(unsigned int n);
int	count1(unsigned int n);

#endif