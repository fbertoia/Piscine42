/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 23:30:25 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/02 12:36:23 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

char	*ft_strrev(char *str)
{
	char	stock_val;
	int		size;
	int		i;
	int		decounter;

	i = 0;
	decounter = 0;
	while (str[decounter] != '\0')
	{
		decounter++;
	}
	decounter--;
	size = decounter - 1;
	while (i <= size / 2)
	{
		stock_val = str[i];
		str[i] = str[decounter];
		str[decounter] = stock_val;
		i++;
		decounter--;
	}
	return (str);
}
