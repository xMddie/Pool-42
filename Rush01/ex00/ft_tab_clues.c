/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_clues.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:55:54 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/24 22:48:04 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	**ft_tab_init(int row, int col);
int	ft_atoi(char c);

int	**ft_filling_clues(int row, int col, char *str, int **tab)
{
	int	i;
	int	x;
	int	y;

	x = -1;
	y = 0;
	i = 0;
	while (str[i])
	{
		if (i % row == 0)
		{
			x++;
			y = 0;
			while (y < col)
			{
				tab[x][y] = ft_atoi(str[i]);
				i++;
				y++;
			}
		}
	}
	return (tab);
}

int	**ft_tab_clues(int row, int col, char *str)
{
	int		**tab;
	int		**tab2;
	char	*str1;
	int		i;
	int		j;

	str1 = malloc(sizeof(char) * row * col);
	tab = ft_tab_init(row, col);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str1[j] = str[i];
			j++;
		}
		i++;
	}
	str1[j] = '\0';
	tab2 = ft_filling_clues(row, col, str1, tab);
	return (tab2);
}
