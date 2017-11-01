/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:49:26 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/20 13:49:39 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int		ft_putchar(int fd, char *str)
{
	int a;

	a = 0;
	while (str[a++])
		;
	write(fd, str, a);
	return (0);
}

int main()
{
	int fd;
	int ret;
	char tab [4096];
	fd = 3;
	fd = open("test", O_RDONLY | O_APPEND);
	// printf("fd = %d", fd);
	// write(fd, "yes", 3);
	ret = read(fd, tab, 4096);
	tab[ret] = 0;
	printf("nb = %d, tab = %s",ret, tab);	
	return (0);
}