/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solution_checker.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 18:32:37 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 18:32:39 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_end_test_column(int **sudoku, int y)
{
	int x;
	int tmp;

	x = 0;
	tmp = 1;
	while (x < 9)
	{
		tmp = tmp * sudoku[x][y];
		x++;
	}
	if (tmp == 362880)
		return (1);
	return (0);
}

int		ft_end_test_line(int **sudoku, int x)
{
	int y;
	int tmp;

	y = 0;
	tmp = 1;
	while (y < 9)
	{
		tmp = tmp * sudoku[x][y];
		y++;
	}
	if (tmp == 362880)
		return (1);
	return (0);
}

int		ft_end_test_box(int **sudoku, int x, int y)
{
	int i;
	int j;
	int tmp;

	tmp = 1;
	i = 0;
	j = 0;
	x = x - (x % 3);
	y = y - y % 3;
	while (i < 3)
	{
		while (j < 3)
		{
			tmp = tmp * sudoku[x + i][y + j];
			j++;
		}
		j = 0;
		i++;
	}
	if (tmp == 362880)
		return (1);
	return (0);
}

int		ft_sudoku_solution_checker(int **sudoku, int position)
{
	int x;
	int y;

	while (position <= 80)
	{
		x = position / 9;
		y = position % 9;
		if (ft_end_test_column(sudoku, y) == 0 ||
		ft_end_test_line(sudoku, x) == 0 || ft_end_test_box(sudoku, x, y) == 0)
			return (0);
		position++;
	}
	return (1);
}
