/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:36:13 by mnau              #+#    #+#             */
/*   Updated: 2022/07/27 09:04:48 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = (int *) malloc((max - min) * sizeof(int));
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}	
	if (*range == 0)
		return (-1);
	return (i);
}
