/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 13:50:24 by vparis            #+#    #+#             */
/*   Updated: 2017/09/03 14:28:25 by vparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_corner(int i)
{
	if (i == 0)
		ft_putchar('A');
	else
		ft_putchar('C');
}

void	ft_print_edge(void)
{
	ft_putchar('B');
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
				ft_print_corner(i);
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_print_edge();
			else
				ft_print_in();
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}
