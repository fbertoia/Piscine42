/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <fbertoia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 00:27:18 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/01 22:53:47 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(int i, int j)
{
	ft_putchar(48 + (j / 10));
	ft_putchar(48 + (j % 10));
	ft_putchar(' ');
	ft_putchar(48 + (i / 10));
	ft_putchar(48 + (i % 10));
	if ((j != 98) || (i != 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (j <= 99)
	{
		while (i <= 99)
		{
			ft_print_numbers(i, j);
			i++;
		}
		j++;
		i = j + 1;
	}
}
