/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdattero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:11:37 by mdattero          #+#    #+#             */
/*   Updated: 2022/07/31 23:11:56 by sel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct t_num_str
{
	int		num;
	char	*str;
}	t_num_str;

int 			ft_nb_lines(char  *filepath);
int 			ft_file_length(char  *filepath);
char		    *ft_dict(char *filepath);
char		    **ft_lines(char *filepath);
char    		*ft_strncpy(char *dest, char *src, unsigned int n);
int 			ft_chr_is_num(char c);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);
void			ft_swap(int *a, int *b);
char			*ft_strstr(char *str, const char *to_find);
int				ft_isspace(char c);
int				ft_count_words(char *str);
int				merror(char **str, int size);
int				count_words(char *str, char c);
void			write_word(char *dest,char *from, char c);
int				split(char **split, char *str, char c);
char			**ft_split(char *str, char c);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_strlen(char *str);
char			*ft_trim_leading_space(char* str);
char			*ft_strcat(char *dest, char *src);
int				chr_is_alpha(char c);
char			*ft_num_needle(char *str);
char            *ft_alpha_needle(char *str);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
int				ft_atoi(char *str);
char			*ft_strdup(char *src);
int 			is_valid_number(char *str);
unsigned int    make_int_tab(char *str);

#endif
