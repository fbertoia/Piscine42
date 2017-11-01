/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:42:13 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/20 11:42:14 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	void	*stock_value;

	if (*begin_list == NULL)
		return ;
	tmp = *begin_list;
	while (tmp->next)
	{
		if ((*cmp)(tmp->data, tmp->next->data) > 0)
		{
			stock_value = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = stock_value;
			tmp = *begin_list;
		}
		else
			tmp = tmp->next;
	}
}
