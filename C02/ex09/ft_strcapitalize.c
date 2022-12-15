/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:34:39 by mnau              #+#    #+#             */
/*   Updated: 2022/07/15 08:59:04 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (a == 0 || !ft_char_is_alphanum(str[a - 1]))
				str[a] = str[a] - 32;
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
		{
			if (a != 0 && ft_char_is_alphanum(str[a - 1]))
				str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
