/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:44:42 by mnau              #+#    #+#             */
/*   Updated: 2022/07/21 13:42:08 by mnau             ###   ########.fr       */
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

	j = 1;
	while (j < argc)
	{
		if (argc > 1)
		{
			ft_putstr(argv[j]);
			write(1, "\n", 1);
		}
	j++;
	}
	return (0);
}
