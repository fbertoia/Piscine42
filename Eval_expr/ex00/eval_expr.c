/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 18:02:05 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/17 18:02:07 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		ft_prior(char c)
{
	if (c == '*' || c == '%' || c == '/')
		return (1);
	else
		return (0);
}

char	ft_op_search(char **arr, int i, int z)
{
	while (arr[i])
	{
		if ((arr[i][0] == '*' || arr[i][0] == '%' || arr[i][0] == '/' ||
		arr[i][0] == '-' || arr[i][0] == '+') && arr[i][1] == 0)
		{
			return (arr[i][0]);
		}
		i++;
	}
	return ('N');
}

char	ft_prio_search(char **arr, int i, int z)
{
	while (arr[i])
	{
		if (arr[i][0] == '(')
			z = z + 2;
		if (arr[i][0] == ')')
			z = z - 2;
		if ((arr[i][0] == '*' || arr[i][0] == '%' || arr[i][0] == '/' ||
		arr[i][0] == '-' || arr[i][0] == '+') && arr[i][1] == 0)
		{
			return (z + ft_prior(arr[i][0]));
		}
		i++;
	}
	return (0);
}

int		add_op(char **arr, t_list **tab, int i, int j)
{
	int z;
	int k;

	z = 0;
	k = 0;
	while (arr[i])
	{
		if (arr[i][0] == '(')
			z = z + 2;
		if (arr[i][0] == ')')
			z = z - 2;
		if ((arr[i][0] >= '0' && arr[i][0] <= '9') || (arr[i][0] == '-' &&
		arr[i][1] >= '0'))
		{
			(*tab)[j].operator = ft_op_search(arr, i, z);
			(*tab)[j].priority = ft_prio_search(arr, i, z);
			j++;
		}
		i++;
	}
	i = 0;
	return (0);
}

int		eval_expr(char *str)
{
	int		i;
	int		j;
	int		size;
	char	**arr;
	t_list	*tab;

	arr = NULL;
	tab = NULL;
	i = 0;
	j = 0;
	arr = ft_split_whitespaces(str);
	size = create_arr(arr, &tab);
	add_number(arr, &tab);
	add_op(arr, &tab, 0, 0);
	while (i < size - 1)
	{
		calculus(&tab, size);
		i++;
	}
	j = 0;
	return (tab[0].value);
}
