/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:20:18 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 23:22:20 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int chr_is_num(char c)
{
	if (c > 47 && c < 58)
        return (0);
    return (1);
}

char    *ft_num_needle(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (chr_is_num(str[i]) == 0)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}
