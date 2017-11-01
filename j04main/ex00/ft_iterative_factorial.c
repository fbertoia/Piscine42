/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 16:28:44 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/03 16:28:47 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int value;

	value = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (0);
	while (nb > 0)
	{
		value = value * nb;
		nb--;
	}
	return (value);
}
