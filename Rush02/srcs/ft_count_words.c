/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:50:30 by mnau              #+#    #+#             */
/*   Updated: 2022/07/31 13:57:10 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_count_words(char *str)
{
	int	count;
	int	new_sp;
	int	i;

	new_sp = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!ft_isspace(str[i]))
		{
			new_sp++;
			if (new_sp == 1)
				count++;
		}
		else
		new_sp = 0;
		i++;
	}
	return (count);
}

/*
int	main(void)
{
	char	str[] = "hey         everybody     !";

	printf("%d", ft_count_words(str));
	return (0);
}
*/
