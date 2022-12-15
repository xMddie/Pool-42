/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkudrjav <lkudrjav@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:57:48 by bsoubaig          #+#    #+#             */
/*   Updated: 2022/07/17 18:59:55 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char left, char center, char right, int size)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i < size - 2)
	{
		ft_putchar(center);
		i++;
	}
	if (size > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y_counter;

	if (x < 0 || y < 0)
		return ;
	y_counter = 0;
	ft_putline('o', '-', 'o', x);
	while (y_counter < y - 2)
	{
		ft_putline('|', ' ', '|', x);
		y_counter++;
	}
	if (y > 1)
	{
		ft_putline('o', '-', 'o', x);
	}
}
