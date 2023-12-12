/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achater <achater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:37:45 by achater           #+#    #+#             */
/*   Updated: 2023/12/05 16:15:20 by achater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_upper(unsigned long nb)
{
	char	x;
	int 	i;

	i = 0;
	if (nb < 16 && nb >= 0)
	{
		if(nb < 10)
		{
			x = nb + 48;
			write(1, &x, 1);
			i++;
		}
		else
		{
			x = nb + 55;
			write(1, &x, 1);
			i++;
		}
	}
	else if (nb > 15)
	{
		i += ft_upper(nb / 16);
		i += ft_upper(nb % 16);
	}
	return (i);
}
int	ft_low(unsigned long nb)
{
	char	x;
	int	i;

	i = 0;
	if (nb < 16 && nb >= 0)
	{
		if(nb < 10)
		{
			x = nb + 48;
			write(1, &x, 1);
			i++;
		}
		else
		{
			x = nb + 87;
			write(1, &x, 1);
			i++;
		}
	}
	else if (nb > 15)
	{
		i += ft_low(nb / 16);
		i += ft_low(nb % 16);
	}
	return (i);
}
int	ft_putadress(unsigned long nb)
{
	int x;

	if(nb == 0)
	{
		x = ft_putstr("0x0");
		return (x);
	}
	x = ft_putstr("0x");
	x += ft_low(nb);
	return (x);
}