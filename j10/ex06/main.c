/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 23:39:54 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/14 23:39:55 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *arr)
{
	int i;
	int neg;
	int tmp;

	i = 0;
	neg = 0;
	tmp = 0;
	while (*arr <= 32)
		arr++;
	while (*arr == '+' || *arr == '-')
	{
		if (*arr == '-')
			neg = 1;
		arr++;
	}
	while (*arr >= '0' && *arr <= '9' && *arr)
	{
		tmp = tmp * 10 + (*arr - '0');
		arr++;
	}
	if (neg)
		return (-tmp);
	return (tmp);
}

void	ft_putnb(int nb)
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
	ft_putchar('\n');
}

void	do_op(char **argv)
{
	void (*f[5])(int, int);

	f[0] = sum;
	f[1] = subtract;
	f[2] = mul;
	f[3] = divi;
	f[4] = mod;
	if (argv[2][0] == '+')
		(*f[0])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (argv[2][0] == '-')
		(*f[1])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (argv[2][0] == '*')
		(*f[2])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (argv[2][0] == '/')
		(*f[3])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (argv[2][0] == '%')
		(*f[4])(ft_atoi(argv[1]), ft_atoi(argv[3]));
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (ft_atoi(argv[3]) == 0 && argv[2][0] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (ft_atoi(argv[3]) == 0 && argv[2][0] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	do_op(argv);
	return (0);
}
