/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:04:27 by mnau              #+#    #+#             */
/*   Updated: 2022/07/21 14:58:37 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	j = argc;
	while (j > 1)
	{
		j--;
		ft_putstr(argv[j]);
		write(1, "\n", 1);
	}
}
