/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 16:02:43 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/17 16:02:46 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		do_op(int a, int b, char operator)
{
	if (operator == '+')
		return (a + b);
	if (operator == '-')
		return (a - b);
	if (operator == '*')
		return (a * b);
	if (operator == '/')
		return (a / b);
	if (operator == '%')
		return (a % b);
	else
		return (0);
}

int		ft_operation(t_list **tab, int i)
{
	(*tab)[i + 1].value = do_op((*tab)[i].value, (*tab)[i + 1].value,
	(*tab)[i].operator);
	(*tab)[i].active = 0;
	return (0);
}

int		calculus(t_list **tab, int size)
{
	int prio;
	int i;

	prio = 0;
	i = 0;
	while (i <= size)
	{
		if (prio < (*tab)[i].priority && (*tab)[i].active)
			prio = (*tab)[i].priority;
		i++;
	}
	i = 0;
	while (prio != (*tab)[i].priority && (*tab)[i].active && i <= size)
		i++;
	ft_operation(tab, i);
	while ((*tab)[i].ptr)
	{
		(*tab)[i] = (*tab)[i + 1];
		i++;
	}
	return (0);
}
