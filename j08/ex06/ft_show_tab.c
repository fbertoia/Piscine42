/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:03:48 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/13 21:03:49 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
			ft_putchar(tab[i][j++]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
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

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
