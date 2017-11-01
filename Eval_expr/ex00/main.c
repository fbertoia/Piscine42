/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 17:43:24 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/17 17:43:26 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int i;
	int a;

	i = 1000000000;
	a = 0;
	if (nb < 0)
		ft_putchar('-');
	if (!nb)
		ft_putchar('0');
	while (i >= 1)
	{
		if (nb / i || a)
		{
			ft_putchar(48 + (nb < 0 ? -(nb / i) : (nb / i)));
			a = 1;
			nb = nb % i;
		}
		i /= 10;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
