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

char	*ft_strcat(char *dest, char *src);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char	str1[13] = "Hello ";
	char	str2[] = "World!";

	char dest[20] = "Une chaine";
	char src[] = "ceci est une chaine qui ne rentre pas dans dest";
  
	
	printf("%s\n", strcat(dest, src, 19));
	printf("%s\n", strcat(str1, str2));
	return (0);
}
//https://stackoverflow.com/questions/23554887/strcat-stack-smashing-behaviour