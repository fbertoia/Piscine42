/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:17:42 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/19 15:18:09 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr;

	ptr = *begin_list;
	while (ptr)
	{
		ptr = ptr->next;
		free(*begin_list);
		*begin_list = ptr;
	}
}
