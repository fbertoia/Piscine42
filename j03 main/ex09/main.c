/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 11:53:58 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/03 12:44:54 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_sort_integer_table(int *str, int size);

int		main(void)
{
	int		i;
	int		str[10] = {2, 1, 4, 7, 4, 8, 3, 0, 4, 4};
	
	i = ft_sort_integer_table(str, 11);
	printf(" %d", str[0]);
	printf(" %d", str[1]);
	printf(" %d", str[2]);
	printf(" %d", str[3]);
	printf(" %d", str[4]);
	printf(" %d", str[5]);
	printf(" %d", str[6]);
	printf(" %d", str[7]);
	printf(" %d", str[8]);
	printf(" %d", str[9]);
	return (0);
}
