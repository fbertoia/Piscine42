/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 11:47:44 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/05 23:54:44 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter * counter <= nb)
	{
		if (nb % (counter) == 0)
			return (0);
		counter++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb >= 2147483647)
		return (0);
	if (nb <= 1)
		return (2);
	while (1)
	{
		if (ft_is_prime(++nb))
			return (nb);
	}
}
