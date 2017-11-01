/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:04:39 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 12:04:41 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test_column(int **sudoku, int nbr, int y)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (sudoku[x][y] == nbr)
			return (0);
		x++;
	}
	return (1);
}

int		ft_test_line(int **sudoku, int nbr, int x)
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (sudoku[x][y] == nbr)
			return (0);
		y++;
	}
	return (1);
}

int		ft_test_box(int **sudoku, int nbr, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	x = x - (x % 3);
	y = y - y % 3;
	while (i < 3)
	{
		while (j < 3)
		{
			if (sudoku[x + i][y + j] == nbr)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		ft_complete_sudoku(int **sudoku, int position)
{
	int x;
	int y;
	int nbr;

	x = position / 9;
	y = position % 9;
	nbr = 1;
	if (position == 81)
		return (1);
	if (sudoku[x][y] != 0)
		return (ft_complete_sudoku(sudoku, position + 1));
	while (nbr <= 9)
	{
		if (ft_test_box(sudoku, nbr, x, y) && ft_test_line(sudoku, nbr, x)
		&& ft_test_column(sudoku, nbr, y))
		{
			sudoku[x][y] = nbr;
			if (ft_complete_sudoku(sudoku, position + 1))
				return (1);
		}
		nbr++;
	}
	sudoku[x][y] = 0;
	return (0);
}

int		ft_complete_sudoku_negatif(int **sudoku, int position)
{
	int x;
	int y;
	int nbr;

	x = position / 9;
	y = position % 9;
	nbr = 9;
	if (position == -1)
		return (1);
	if (sudoku[x][y] != 0)
		return (ft_complete_sudoku_negatif(sudoku, position - 1));
	while (nbr >= 1)
	{
		if (ft_test_box(sudoku, nbr, x, y) && ft_test_line(sudoku, nbr, x)
		&& ft_test_column(sudoku, nbr, y))
		{
			sudoku[x][y] = nbr;
			if (ft_complete_sudoku_negatif(sudoku, position - 1))
				return (1);
		}
		nbr--;
	}
	sudoku[x][y] = 0;
	return (0);
}
