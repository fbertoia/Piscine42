/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 11:53:58 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/03 11:27:44 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_swap(int *a, int *b);
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int		i;
	int		j;
    int		*ptri;
    int		*ptrj;
    
    i = 26;
    j = 12;
    ptri = &i;
    ptrj = &j;
    printf("i = %d, j = %d ", i, j) ;
    ft_swap(ptri, ptrj);
	printf("i = %d, j = %d ", i, j) ;
	return (0);
}
