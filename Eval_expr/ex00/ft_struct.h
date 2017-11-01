/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 12:58:30 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/16 13:00:26 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	int		priority;
	int		value;
	int		active;
	char	operator;
	int		ptr;
}				t_list;
char			**ft_split_whitespaces(char *str);
void			ft_print_words_tables(char **tab);
int				ft_atoi(char *str);
int				calculus(t_list **tab, int size);
void			ft_putnbr(int nb);
int				eval_expr(char *argv);
int				ft_putchar(char c);
int				create_arr(char **arr, t_list **tab);
int				add_number(char **arr, t_list **tab);

#endif
