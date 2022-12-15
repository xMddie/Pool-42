/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:38:16 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/24 22:54:34 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		**ft_tab_init(int row, int col);
int		**ft_tab_clues(int row, int col, char *str);
void	ft_free_tab(int row, int **tab);
void	ft_write_tab(int row, int col, int **tab);
int		***ft_tab_3d(int row, int col);
void	ft_write_tab_3d(int row, int col, int ***tab);
void	ft_free_tab_3d(int row, int col, int ***tab);

int	main(int argc, char *argv[])
{
	int	row;
	int	col;
	int	**tab;
	int	**clues;
	int	***pos;

	if (argc == 2)
	{
		row = ft_sqrt((ft_strlen(argv[1]) + 1) / 2);
		col = ft_sqrt((ft_strlen(argv[1]) + 1) / 2);
		tab = ft_tab_init(row, col);
		ft_putstr("The array elements are :\n");
		ft_write_tab(row, col, tab);
		clues = ft_tab_clues(row, col, argv[1]);
		ft_putstr("The array clues are :\n");
		ft_write_tab(row, col, clues);
		ft_putstr("The possibilities are :\n");
		pos = ft_tab_3d(row, col);
		ft_write_tab_3d(row, col, pos);
		ft_free_tab(row, tab);
		ft_free_tab(row, clues);
		ft_free_tab_3d(row, col, pos);
	}
	return (0);
}
