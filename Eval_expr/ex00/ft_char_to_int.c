/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:13:54 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/16 16:13:56 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		ft_atoi(char *str)
{
	int	value;
	int i;
	int neg;

	value = 0;
	i = 0;
	neg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	if (neg)
		return (value * (-1));
	return (value);
}

int		add_number(char **arr, t_list **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (arr[i])
	{
		if ((arr[i][0] >= '0' && arr[i][0] <= '9') || (arr[i][0] == '-' &&
		arr[i][1] >= '0'))
		{
			(*tab)[j].value = ft_atoi(arr[i]);
			(*tab)[j].ptr = 1;
			(*tab)[j].active = 1;
			(*tab)[j].operator = '+';
			j++;
		}
		i++;
	}
	(*tab)[j].ptr = 0;
	(*tab)[j].operator = 'N';
	(*tab)[j].value = 0;
	return (0);
}

int		create_arr(char **arr, t_list **tab)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (arr[i])
	{
		if ((arr[i][0] >= '0' && arr[i][0] <= '9') || (arr[i][0] == '-' &&
		arr[i][1] >= '0'))
		{
			size++;
		}
		i++;
	}
	*tab = (t_list *)malloc(sizeof(t_list) * (size + 1));
	return (size);
}
