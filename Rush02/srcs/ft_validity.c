/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:49:59 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 22:54:36 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"
#include <stdlib.h>

int is_valid_number(char *str)
{

	if (str[0] == '\0')
	{
		return (0);
	}
	if ((int)ft_strlen(str) > 48)
	{
		return (0);
	}
	return (1);
}

/*
long	ft_atol(char *str)
{
	long	n;
	int		negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if (negative)
		n *= -1;
	return (n);
}

int	ft_is_valid(char	*value)
{

}

int	valid_number(char *str)
{
	if (ft_atoi(str) < 0 || is_float(str) || is_too_long(str))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_check_args(argc, argv, &path, &value);
{
	if (!ft_is_valid(value))
		ft_putstr("Error\n");
	else if ((content = ft_file_load(path)))
	{
		dict = ft_dict_create(content);
		free(content);
		if (dict)
		{
			ft_print(dict, value);
			ft_list_clear(dict, &ft_dict_clear);
		}
	}
	else
		ft_putstr("Dict Error\n");
	return (0);
}*/
