/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checker_multiple_solutions.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:17:00 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 12:17:02 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compare_sudokus(int **sudoku, int **sudoku_scnd, int position)
{
	int x;
	int y;

	x = position / 9;
	y = position % 9;
	while (position <= 80)
	{
		if (sudoku[x][y] != sudoku_scnd[x][y])
			return (0);
		position++;
	}
	return (1);
}
