/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:23:37 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 21:23:42 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_queens_solver(int board[8][8], int position)
{
	printf("%d", board[0][0]);
	return (1);
}

int ft_eight_queens_puzzle(void)
{
	int i;
	int j;
	int board[8][8];
	int ***ptr;
	ptr = &board;

	i = 0;
	while (i < 8)
	{
		while(j < 8)
		{
			board[i][j] = 1;
			j++;
		}
		i++;
		j = 0;
	}
	return(ft_queens_solver(ptr, 0));
}
