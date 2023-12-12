/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achater <achater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:45:37 by achater           #+#    #+#             */
/*   Updated: 2023/12/02 00:18:21 by achater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1,"(null)",6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
int	count(int n)
{
	int		x;
	long	nb;

	nb = n;
	x = 0;
	if (nb == 0)
		return (1);
	if(nb < 0)
		x++;
	while (nb)
	{
		nb /= 10;
		x++;
	}
	return (x);
}
int	count1(unsigned int n)
{
	int		x;
	long	nb;

	nb = n;
	x = 0;
	if (nb == 0)
		return (1);
	if(nb < 0)
		x++;
	while (nb)
	{
		nb /= 10;
		x++;
	}
	return (x);
}
int	ft_putnbr(int n)
{
	long	nb;
	char	x;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10 && nb >= 0)
	{
		x = nb + 48;
		write(1, &x, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (count(n));
}
int	ft_putnbr1(unsigned int n)
{
	long	nb;
	char	x;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10 && nb >= 0)
	{
		x = nb + 48;
		write(1, &x, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (count1(n));
}
