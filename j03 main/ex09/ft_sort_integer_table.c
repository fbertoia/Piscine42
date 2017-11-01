/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 11:31:41 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/03 13:00:46 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int stock_val;

	i = 0;
	while (i < size - 2)
	{
		if (tab[i] > tab[i + 1])
		{
			stock_val = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = stock_val;
			i = 0;
		}
		else
			i++;
	}
}
