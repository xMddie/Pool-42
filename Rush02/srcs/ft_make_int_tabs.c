/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tabs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:14:16 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 23:10:55 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"
#include <stdlib.h>

unsigned int	make_int_tab(char *str)
{
	char	*start;
	char	*end;
	unsigned int	int_tab;
	int	i;
	
	i = 0;
	end = ft_num_needle(str);
	start = malloc(sizeof(char) * (ft_strlen(str) - ft_strlen(end)) + 1);
   	start = ft_strncpy(start, str, (ft_strlen(str) - ft_strlen(end)));
	int_tab = ft_atoi(start);
	return (int_tab);	
}
