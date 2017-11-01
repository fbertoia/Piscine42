/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:13:07 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 12:13:09 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_array(int **sudoku)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 8)
	{
		while (j <= 8)
		{
			sudoku[i][j] = sudoku[i][j] + 48;
			ft_putchar((char)sudoku[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
