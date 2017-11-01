/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:20:11 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/15 11:20:13 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	ptr->data = data;
	ptr->next = NULL;
	return (ptr);
}
