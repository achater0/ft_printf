/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achater <achater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:00:22 by achater           #+#    #+#             */
/*   Updated: 2023/12/10 10:03:49 by achater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handl(char str, int *x, va_list arg)
{
	if(str == 'c')
		*x += ft_putchar(va_arg(arg, int));
	else if(str == 's')
		*x += ft_putstr(va_arg(arg, char*));
	else if(str == 'p')
		*x += ft_putadress(va_arg(arg, unsigned long));
	else if(str == 'd' || str == 'i')
		*x += ft_putnbr(va_arg(arg, int));
	else if(str == 'u')
		*x += ft_putnbr1((unsigned int)va_arg(arg, unsigned int));
	else if(str == 'x')
		*x += ft_low(va_arg(arg, unsigned int));
	else if(str == 'X')
		*x += ft_upper(va_arg(arg, unsigned int));
	else
		*x += ft_putchar(str);
}
int	f(const char *str, va_list arg, int x)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == '%')
		{
			if (str[i + 1] == '\0')
				return (x);
			else
				handl(str[i + 1], &x, arg);
			i +=2;
		}
		else
		{
			x += ft_putchar(str[i]);
			i++;
		}
	}
	return (x);
}
int ft_printf(const char *str, ...)
{
	va_list	arg;
	int	x;

	va_start(arg, str);
	if (write(1, "", 0) == -1)
		return (-1);
	x = 0;
	x = f(str, arg, x);
	va_end(arg);
	return (x);
}
int main()
{
	// printf("ul %d",*ptr);
	ft_printf("%y\n");
	printf("%y");
}