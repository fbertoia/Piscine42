/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 12:59:47 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/19 12:59:48 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_element;
	t_list *ptr2;

	new_element = ft_create_elem(data);
	new_element->next = NULL;
	new_element->data = data;
	ptr2 = *begin_list;
	while (ptr2->next)
		ptr2 = ptr2->next;
	ptr2->next = new_element;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new_list;

	ac = ac - 1;
	new_list = ft_create_elem(av[ac]);
	ac = ac - 1;
	while (ac >= 0)
	{
		ft_list_push_back(&new_list, av[ac]);
		ac--;
	}
	return (new_list);
}
