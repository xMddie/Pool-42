/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:35:33 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 22:55:56 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"
#include <stdlib.h>

int	main(int ac, char	**av)
{
    if (ac == 2)
    {
        if (is_valid_number(av[1]) == 0)
            return (1);
        ft_lines("numbers.dict.txt");
    }
    else if (ac == 3)
    {
        if (!is_valid_number(av[2]))
            return (1);
        ft_lines(av[2]);
    }
    return (0);
}
