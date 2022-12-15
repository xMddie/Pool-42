/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:52:46 by mnau              #+#    #+#             */
/*   Updated: 2022/07/13 20:21:00 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_each_nb(char n1, char n2)
{
	ft_putchar('0' + n1 / 10);
	ft_putchar('0' + n1 - n1 / 10 * 10);
	ft_putchar(' ');
	ft_putchar('0' + n2 / 10);
	ft_putchar('0' + n2 - n2 / 10 * 10);
	if (n1 != 98 || n2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_each_nb(n1, n2);
			n2++;
		}
		n1++;
	}
}
