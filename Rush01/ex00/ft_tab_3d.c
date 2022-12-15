/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_3d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:57:23 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/24 22:50:01 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	***ft_tab_3d(int row, int col)
{
	int	***tab;
	int	i;
	int	j;

	tab = (int ***)malloc(row * sizeof(int **));
	i = 0;
	while (i < row)
	{
		tab[i] = (int **)malloc(col * sizeof(int *));
		j = 0;
		while (j < row)
		{
			tab[i][j] = (int *)malloc(row * sizeof(int));
			j++;
		}
		i++;
	}
	return (tab);
}
