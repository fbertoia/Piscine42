/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <fbertoia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 00:52:04 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/01 23:13:36 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
