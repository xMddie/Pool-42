/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkudrjav <lkudrjav@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:57:48 by bsoubaig          #+#    #+#             */
/*   Updated: 2022/07/17 19:02:06 by bsoubaig         ###   ########.fr       */
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
	ft_putline('A', 'B', 'C', x);
	while (y_counter < y - 2)
	{
		ft_putline('B', ' ', 'B', x);
		y_counter++;
	}
	if (y > 1)
	{
		ft_putline('C', 'B', 'A', x);
	}
}
