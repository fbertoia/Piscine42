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

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char	tabsrc[] ="bonjour";
	char	tabdest[]="salut les loulous";

	ft_strncpy(tabdest, tabsrc, 5);
	printf("tabdest = %s\n", tabdest);
	printf("tabdest = %c\n", tabdest[14]);
	
	char	tabsrc2[] ="bonjour";
	char	tabdest2[]="salut les loulous";

	strncpy(tabdest2, tabsrc2, 5);
	printf("tabdest = %s\n", tabdest2);
	printf("tabdest = %c\n", tabdest2[14]);

	return (0);
}
