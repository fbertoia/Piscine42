/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 22:44:29 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/03 22:44:33 by fbertoia         ###   ########.fr       */
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
