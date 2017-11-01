/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:43:33 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/19 15:43:34 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 1;
	if (nbr == 0)
		return (NULL);
	while (i < nbr && begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}
