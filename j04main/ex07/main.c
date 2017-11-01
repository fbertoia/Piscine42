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

int     ft_find_next_prime(int nb);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	long long   i;
    
    i = 2147483646;
    i = ft_find_next_prime(i);
    printf("\ni de (23) = %lld", i);
    i = 159318;
    i = ft_find_next_prime(i);
    printf("\ni de (23) = %lld", i);
    i = 1;
    i = ft_find_next_prime(i);
    printf("\ni de (23) = %lld", i);
    i = 0;
    i = ft_find_next_prime(i);
    printf("\ni de (23) = %lld", i);
	return (0);
}

