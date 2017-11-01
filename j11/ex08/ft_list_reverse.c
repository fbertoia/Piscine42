/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:18:01 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/19 16:18:03 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_length_list(t_list *begin_list)
{
	int i;

	i = 1;
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list		*ft_list_at(t_list *begin_list, int nbr)
{
	int i;

	i = 1;
	if (nbr == 0)
		return (NULL);
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

void		ft_list_reverse(t_list **begin_list)
{
	int		length;
	t_list	*tmp;
	t_list	*last_el;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	length = ft_length_list(*begin_list);
	last_el = ft_list_at(*begin_list, length);
	tmp = last_el;
	while ((*begin_list)->next)
	{
		tmp->next = ft_list_at(*begin_list, length - 1);
		tmp = tmp->next;
		tmp->next = NULL;
		length--;
	}
	(*begin_list)->next = NULL;
	*begin_list = last_el;
}
