/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:28:34 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 21:38:55 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

char	*ft_trim_leading_space(char	*str)
{
	char	*str1;
	int		count;
	int		k;
	int		len;

	count = 0;
	len = ft_strlen(str);
	str1 = malloc(sizeof(char *) * (len));
	while (str[count] == ' ')
	{
		count++;
	}
	printf("%d", count);
	k = 0;
	while (str[count])
	{
		str1[k] = str[count];
		count++;
		k++;
	}
	str1[k] = '\0';
	return (str1);
}
/*
int main(void)
{
    char str[] = " hey         everybody     !";
    char* ptr;
  
    ptr = trim_leading_space(str);
  
    printf("%s", ptr);
    return 0;
}
*/
