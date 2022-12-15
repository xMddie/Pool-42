/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdattero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:21:18 by mdattero          #+#    #+#             */
/*   Updated: 2022/07/31 22:57:47 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

typedef struct s_line	t_line;

struct s_line {
	unsigned int	nb;
	char			*def;
	t_line			*next;
};

t_line	*add_link(t_line *line, unsigned int nb, char *def)
{
	t_line	*tmp;

	tmp = malloc (sizeof(t_line));
	if (tmp)
	{
		tmp->nb = nb;
		tmp->def = def;
		tmp->next = line;
	}
	return (tmp);
}

void	print_line(t_line *line)
{
	while (line)
	{
		ft_putnbr(line->nb);
		ft_putstr(line->def);
		ft_putchar('\n');
		line = line->next;
	}
}
/*
t_line	*remp(t_line *line)
{
	int		i;
	t_line	line;

	i = ft_nb_lines("../numbers.dict");
	while (i > 0)
	{
		line = add_link(line, )
	}
}*/	
