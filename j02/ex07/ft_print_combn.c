/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:39:52 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/01 23:13:52 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_compare_numbers(char *numb, int n)
{
	int counter;

	counter = 0;
	while (counter < (n - 1))
	{
		if (numb[counter] > numb[counter + 1])
			return (0);
		counter++;
	}
	return (1);
}

void	ft_print_nbr(char *numb, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		ft_putchar(numb[counter]);
		counter++;
	}
	if (numb[0] < (':' - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		following_number(char *numb, int n, int deep)
{
	int counter;

	counter = n - 1;
	if (numb[counter] + 1 > deep)
	{
		if (counter > 0)
			following_number(numb, n - 1, deep - 1);
		numb[counter] = numb[counter - 1] + 1;
	}
	else
	{
		numb[counter]++;
	}
	return (0);
}

void	initialize_numb(char *numb)
{
	numb[0] = '0';
	numb[1] = '1';
	numb[2] = '2';
	numb[3] = '3';
	numb[4] = '4';
	numb[5] = '5';
	numb[6] = '6';
	numb[7] = '7';
	numb[8] = '8';
}

void	ft_print_combn(int n)
{
	char numb[9];

	initialize_numb(numb);
	while (numb[0] <= (':' - n))
	{
		if (ft_compare_numbers(numb, n))
		{
			ft_print_nbr(numb, n);
			if (numb[0] >= (':' - n))
				break ;
			following_number(numb, n, '9');
		}
	}
}
