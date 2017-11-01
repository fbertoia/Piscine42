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

void    ft_ultimate_ft(int *********str);
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int		*********i1;
    int		********i2;
    int		*******i3;
    int		******i4;
    int		*****i5;
    int		****i6;
    int		***i7;
    int		**i8;
    int		*i9;
	int		i;
    
    i1 = &i2;
    i2 = &i3;
    i3 = &i4;
    i4 = &i5;
    i5 = &i6;
    i6 = &i7;
    i7 = &i8;
    i8 = &i9;
    i9 = &i;
    i = 10;
	
    ft_ultimate_ft(i1);
	printf("%d", i) ;
	return (0);
}
