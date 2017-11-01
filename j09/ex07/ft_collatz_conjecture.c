/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:46:28 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/08 11:27:12 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 0)
		return (0);
	if (base == 1)
		return (0);
	return (1 + ft_collatz_conjecture(base % 2 == 0 ? base / 2 : base * 3 + 1));
}
