/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 21:52:36 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/09 21:52:38 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_change_array_int(char **argv, int **sudoku);
void	ft_print_array(int **sudoku);
int		**ft_array_initializer(int **sudoku);
void	ft_array_destroyer(int **sudoku);
int		ft_complete_sudoku(int **sudoku, int position);
int		ft_complete_sudoku_negatif(int **sudoku, int position);
int		ft_compare_sudokus(int **sudoku, int **sudoku_scnd, int position);
int		ft_sudoku_solution_checker(int **sudoku, int position);

int		main(int argc, char **argv)
{
	int	**sudoku;
	int **sudoku_scnd;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	sudoku = NULL;
	sudoku_scnd = NULL;
	sudoku = ft_array_initializer(sudoku);
	sudoku_scnd = ft_array_initializer(sudoku_scnd);
	if (ft_change_array_int(argv, sudoku)
	&& ft_change_array_int(argv, sudoku_scnd)
	&& ft_complete_sudoku(sudoku, 0)
	&& ft_complete_sudoku_negatif(sudoku_scnd, 80)
	&& ft_compare_sudokus(sudoku, sudoku_scnd, 0)
	&& ft_sudoku_solution_checker(sudoku, 0))
		ft_print_array(sudoku_scnd);
	else
		write(1, "Error\n", 6);
	ft_array_destroyer(sudoku);
	ft_array_destroyer(sudoku_scnd);
	return (0);
}
