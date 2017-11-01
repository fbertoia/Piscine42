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

int		ft_sqrt(int nb);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int		i;
    
    i = 625;
    i = ft_sqrt(i);
    printf("\ni de (23) = %d", i);
    i = 99980001;
    i = ft_sqrt(i);
    printf("\ni de (1) = %d", i);
    i = 4;
    i = ft_sqrt(i);
	printf("\ni de (0) = %d", i);
	return (0);
}
