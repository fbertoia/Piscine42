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

int     ft_strncmp(char *s1, char *s2, unsigned int n);
    
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
    unsigned int        i = 0;
	char	            s1[100] ="ab";
    char	            s2[100]="abc";

	i = strncmp(s1, s2, 2);
	printf("strncmp = %d\n", i);
	i = ft_strncmp(s1, s2, 2);
	printf("ft_strncmp = %d\n", i);
	return (0);
}
