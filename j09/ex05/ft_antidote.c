/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 22:43:32 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/07 22:47:01 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int stock_val;

	i = 0;
	while (i <= size - 2)
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

int		ft_antidote(int i, int j, int k)
{
	int tab[3];

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	ft_sort_integer_table(tab, 3);
	return (tab[1]);
}
