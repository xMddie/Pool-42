/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:37:26 by mnau              #+#    #+#             */
/*   Updated: 2022/07/27 09:03:24 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*uwu;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	uwu = (int *) malloc((max - min) * sizeof(int));
	while (i < max - min)
	{
		uwu[i] = min + i;
		i++;
	}	
	if (uwu == 0)
		return (0);
	return (uwu);
}
