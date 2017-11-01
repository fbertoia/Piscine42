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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
    char dest[5] = "abcd";
    char src[6] = "def";
    
    // printf("%lu\n", strlcat(dest, src, 12));
    printf("%u\n", ft_strlcat(dest, src, 7));  
    printf("%s\n", dest);    


    char dest1[5] = "abcd";
    char src1[6] = "def";
    
    // printf("%lu\n", strlcat(dest, src, 12));
    // printf("%lu\n", strlcat(dest1, src1, 7));  
    printf("%s\n", dest1);    
	return (0);
}
