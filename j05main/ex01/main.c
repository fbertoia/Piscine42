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

void	ft_putnbr(int nb);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
    int i;
    i = 1;
    ft_putnbr(i);
    ft_putchar('\n');
    i = -1;
    ft_putnbr(i);
    ft_putchar('\n');    
    i = 0;
    ft_putnbr(i);
    ft_putchar('\n');    
    i = 2147483647;
    ft_putnbr(i);
    ft_putchar('\n'); 
    i = -2147483648;
    ft_putnbr(i);
    ft_putchar('\n');   
	return (0);
}
