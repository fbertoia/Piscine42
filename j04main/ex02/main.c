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

int		ft_iterative_power(int nb, int power);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
//	int		i;
    
    printf("%d", ft_recursive_power(-2,3));
    
  /* i = -12;
    i = ft_iterative_power(2, 10);
    printf("\ni de (23) = %d",);
    i = 13;
    i = ft_iterative_power(0, 3);
    printf("\ni de (1) = %d", i);
    i = 0;
    i = ft_iterative_power(-6, 3);
	printf("\ni de (0) = %d", i);
	return (0);*/
}
