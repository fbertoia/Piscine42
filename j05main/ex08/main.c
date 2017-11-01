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
#include <string.h>

char		*ft_strupcase(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char	s1[] ="hellooo'you";
    char    *i;

	i = ft_strupcase(s1);
	printf("i = %s\n", i);
	return (0);
}
