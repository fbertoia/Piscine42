/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 11:37:08 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/08 16:42:33 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int tab[32];
	unsigned int i;
	unsigned int counter;
	unsigned int value_bis;

	value_bis = value;
	i = 2;
	counter = 0;
	while (counter < 32)
	{
		tab[counter] = i - 1;
		i *= 2;
		counter++;
	}
	counter = 0;
	while (value_bis <= tab[counter])
		counter++;
	return (counter);
}
