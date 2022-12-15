/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:07:33 by mnau              #+#    #+#             */
/*   Updated: 2022/08/03 09:53:29 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_length(int size, int sep_size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += sep_size;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*copy;

	if (size == 0)
	{
		copy = (char *) malloc(1);
		*copy = 0;
		return (copy);
	}
	length = ft_compute_size(size, strs, ft_strlen(sep));
	copy = malloc(sizeof(char) * (length + 1));
	if (!strs || !sep || !copy)
		return (NULL);
	*copy = 0;
	i = 0;
	while (i < size)
	{
		copy = ft_strcat(copy, strs[i]);
		if (i < size - 1)
			copy = ft_strcat(copy, sep);
		i++;
	}
	*copy += '\0';
	return (copy);
}
