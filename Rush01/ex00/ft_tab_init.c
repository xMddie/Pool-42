/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:23:08 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/24 10:52:02 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_tab_init(int row, int col)
{
	int	**tab;
	int	i;
	int	j;

	tab = (int **)malloc(row * sizeof(int *));
	i = 0;
	while (i < row)
	{
		tab[i] = (int *)malloc(col * sizeof(int));
		i++;
	}
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
