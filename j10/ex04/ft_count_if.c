/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:18:05 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/14 21:18:06 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		counter = counter + (*f)(tab[i]);
		i++;
	}
	return (counter);
}
