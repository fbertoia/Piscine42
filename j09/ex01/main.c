/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 18:29:25 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/07 18:57:50 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_takes_place(int hour);

int main()
{
	int i;
	
	i = -20;
	while (i <= 50)
	{
		printf("%d ", i);
		ft_takes_place(i++);
	}
	return (0);
}
