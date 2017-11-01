/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:06:51 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/18 15:06:53 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	sum(int a, int b);
void	subtract(int a, int b);
void	mul(int a, int b);
void	divi(int a, int b);
void	mod(int a, int b);
void	ft_putnb(int nb);
int		ft_atoi(char *arr);

#endif
