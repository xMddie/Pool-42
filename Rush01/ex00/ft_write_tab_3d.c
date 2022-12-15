/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_tab_3d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:18:52 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/24 23:08:22 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_write_tab_in_str(int ***tab, int i, int j, int k)
{
	tab[i][j][k] = k + 1;
	ft_putchar(tab[i][j][k] + '0');
}

void	ft_write_tab_3d(int row, int col, int ***tab)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < row)
	{
		j = -1;
		while (++j < col)
		{
			k = -1;
			ft_putchar('{');
			while (++k < row - 1)
			{
				ft_write_tab_in_str(tab, i, j, k);
				ft_putchar(' ');
			}
			ft_write_tab_in_str(tab, i, j, k);
			ft_putstr("} ");
		}
		ft_putchar('\n');
	}
}
