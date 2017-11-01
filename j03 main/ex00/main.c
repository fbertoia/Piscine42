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

void    ft_ft(int *str);
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{

    int		*ptr;
	int		i;
    
    ptr = &i;
    i = 10;
    ft_ft(ptr);
	printf("%d", i);
	return (0);
}
