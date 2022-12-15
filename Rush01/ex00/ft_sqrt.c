/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:43:48 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/23 17:31:38 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mid;
	int	start;
	int	end;
	int	temp;

	start = 1;
	end = nb;
	temp = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
		{
			start = mid + 1;
			temp = mid;
		}
		else
			end = mid - 1;
	}
	return (0);
}
