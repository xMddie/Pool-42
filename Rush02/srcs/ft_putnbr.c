/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:58:45 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 23:00:03 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
/*
int main(int argc, const char *argv[])
{
	int i;

	i = -100;

	while (i != 500)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		i+= 50;
	}
	return 0;
}*/
