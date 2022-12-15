/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:58:00 by mnau              #+#    #+#             */
/*   Updated: 2022/07/31 21:13:44 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_trim_leading_space(char *str);

int	merror(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

int	count_words(char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == c || str[i + 1] == '\0') == 1
			&& (str[i] == c || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char c)
{
	int	i;

	i = 0;
	while ((from[i] == c || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

int	split(char **split, char *str, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == c || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == c || str[i + j] == '\0') == 0)
				j++;
			split[word] = (char *) malloc(sizeof(char ) * (j + 1));
			if (split[word] == NULL)
				return (merror(split, word - 1));
			write_word(split[word], str + i, c);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(char *str, char c)
{
	char	**splits;
	int		words;

	words = count_words(str, c);
	splits = malloc(sizeof(char *) * (words + 1));
	if (splits == NULL)
		return (NULL);
	splits[words] = 0;
	if (split(splits, str, c) == -1)
		return (NULL);
	return (splits);
}

/*int	main(void)
{
   char str[] = "            hey everybody we         !";
   char **ptr;

   ptr = ft_split(str, ' ');

   printf("%s %s %s", ptr[0], ptr[1], ptr[2]);
   return 0;
 }*/
