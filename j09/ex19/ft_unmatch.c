/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 14:40:32 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/08 15:06:09 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int check;
	int flag;

	i = 0;
	check = 0;
	flag = 0;
	while (i < length)
	{
		while (check < length)
		{
			if (check == i)
				check++;
			if (tab[check] == tab[i])
				flag = 1;
			check++;
		}
		if (flag == 0)
			return (tab[i]);
		flag = 0;
		check = 0;
		i++;
	}
	return (0);
}
