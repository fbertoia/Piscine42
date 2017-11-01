/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 08:37:36 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/08 11:18:10 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_collatz_conjecture(unsigned int base);
int main(void)
{
	printf("%d", ft_collatz_conjecture(15));
	return (0);
}
