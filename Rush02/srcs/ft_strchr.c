/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:14:03 by mnau              #+#    #+#             */
/*   Updated: 2022/07/31 23:05:07 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	chr_is_alpha(char c)
{
	if ((c > 64 && c < 123)
		|| (c > 90 && c < 97))
		return (0);
	return (1);
}

char	*ft_alpha_needle(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (chr_is_alpha(str[i]) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char	s1[] = "20 : hey   18    everybody !";

	printf("ft : %s\n", ft_needle(s1));
	//printf("string.h : %s\n", strchr(s1, c));
	return (0);
}
*/
