/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:08:46 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/15 14:08:47 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_element;
	t_list *ptr2;

	new_element = ft_create_elem(data);
	ptr2 = *begin_list;
	while (ptr2->next)
		ptr2 = ptr2->next;
	ptr2->next = new_element;
	new_element->data = data;
}
