/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 14:29:36 by vparis            #+#    #+#             */
/*   Updated: 2017/09/03 14:29:39 by vparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_corner(void)
{
	ft_putchar('o');
}

void	ft_print_edge(int i, int y)
{
	if (i == 0 || i == y - 1)
		ft_putchar('-');
	else
		ft_putchar('|');
}

void	ft_print_in(void)
{
	ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x < 1 || y < 1)
		return ;
	while (i < y)
	{
		while (j < x)
		{
			if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_print_corner();
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_print_edge(i, y);
			else
				ft_print_in();
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}
