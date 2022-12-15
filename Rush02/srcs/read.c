/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 22:17:00 by sel-mouh          #+#    #+#             */
/*   Updated: 2022/07/31 22:56:57 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"
#include <stdlib.h>

int ft_nb_lines(char  *filepath)
{
    int lines;
    int fd;
    char    d;

    lines = 1;
    fd  = open(filepath, O_RDONLY);
    if (fd == -1 || fd == 0)
        printf("Error");
    while (read(fd, &d, sizeof(char)))
    {
        if (d == '\n')
            lines++;
    }
    return (lines);
    close(fd);
}

int	ft_file_length(char  *filepath)
{
    int bytes;
	int	fd;
	char	d;

    bytes = 0;
    fd  = open(filepath, O_RDONLY);
    if (fd == -1 || fd == 0)
        printf("Error");
	while (read(fd, &d, sizeof(char)))
    {
		bytes++;
    }
	return (bytes);
    close(fd);
}

char	*ft_dict(char *filepath)
{
	int	fd;
	char	*dict;
	int	s_file;
	int	len_file;

	len_file = ft_file_length(filepath);
	dict = malloc(sizeof(char) * len_file);
	fd = open(filepath, O_RDONLY);
	if (fd == -1 || fd == 0)
		ft_putstr("Error");
    s_file = read(fd, dict, len_file);
    dict[s_file] = '\0';
	return (dict);
	close (fd);
}

char	**ft_lines(char *filepath)
{
    char    **def;
	int	nb_lines;
	char	*dict;
	
    dict = ft_dict(filepath);
    nb_lines = ft_nb_lines(filepath);
    def = malloc(sizeof(char *) * nb_lines);
    def = ft_split(dict, '\n');
	return (def);
}
