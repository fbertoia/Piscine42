/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_initializer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:10:15 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 12:10:18 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**ft_array_initializer(int **sudoku)
{
	int counter;

	counter = 0;
	sudoku = (int **)malloc(9 * sizeof(int *));
	while (counter < 9)
	{
		sudoku[counter] = (int *)malloc(9 * sizeof(int));
		counter++;
	}
	return (sudoku);
}

int		ft_change_array_int(char **argv, int **sudoku)
{
	int x;
	int y;

	x = 1;
	y = 0;
	while (x <= 9)
	{
		while (y <= 8)
		{
			if (argv[x][y] == '.')
				sudoku[x - 1][y] = 0;
			else if (argv[x][y] > '9' || argv[x][y] < '0')
				return (0);
			else
				sudoku[x - 1][y] = argv[x][y] - 48;
			y++;
		}
		y = 0;
		x++;
	}
	return (1);
}

void	ft_array_destroyer(int **sudoku)
{
	int counter;

	counter = 0;
	while (counter < 9)
	{
		free(sudoku[counter]);
		counter++;
	}
	free(sudoku);
}
