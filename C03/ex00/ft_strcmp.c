/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 07:01:34 by mnau              #+#    #+#             */
/*   Updated: 2022/07/16 19:28:48 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		else
			a++;
	}
	if (s1[a] == '\0')
		return (-s2[a]);
	else if (s2[a] == '\0')
		return (s1[a]);
	return (0);
}

/*
int main()
{
	char s1[40] = ";kj;lk";
    char s2[40] = "LKJHLK";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
}
*/
