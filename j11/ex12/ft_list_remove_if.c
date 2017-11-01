/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 00:51:41 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/20 00:51:42 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_beginning(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = *begin_list;
	while ((*cmp)((*begin_list)->data, data_ref) == 0 && (*begin_list)->next)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	if ((*cmp)((*begin_list)->data, data_ref) == 0)
	{
		free(*begin_list);
		return (NULL);
	}
	return (*begin_list);
}

void	ft_middle(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*scnd;

	tmp = *begin_list;
	scnd = (*begin_list)->next;
	while (scnd->next)
	{
		if ((*cmp)(scnd->data, data_ref) == 0 && scnd->next)
		{
			tmp->next = scnd->next;
			free(scnd);
			scnd = tmp->next;
		}
		else
		{
			scnd = scnd->next;
			tmp = tmp->next;
		}
	}
	if ((*cmp)(scnd->data, data_ref) == 0)
	{
		free(scnd);
		tmp->next = NULL;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (*begin_list == NULL)
		return ;
	*begin_list = ft_beginning(begin_list, data_ref, (*cmp));
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	ft_middle(begin_list, data_ref, (*cmp));
}
