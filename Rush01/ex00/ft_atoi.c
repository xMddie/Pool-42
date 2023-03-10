/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:03:57 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/24 11:52:24 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(char c)
{
	int	res;

	res = 0;
	if (ft_is_digit(c) == 1)
		res = res * 10 + c - '0';
	else
		return (0);
	return (res);
}
