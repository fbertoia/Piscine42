/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:24:41 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/03 17:25:02 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int value;

	value = 1;
	if (power <= 0)
		return (0);
	while (power > 0)
	{
		value = value * nb;
		power--;
	}
	return (value);
}
