/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:37:45 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/18 14:37:46 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	sum(int a, int b)
{
	ft_putnb(a + b);
}

void	subtract(int a, int b)
{
	ft_putnb(a - b);
}

void	mul(int a, int b)
{
	ft_putnb(a * b);
}

void	divi(int a, int b)
{
	ft_putnb(a / b);
}

void	mod(int a, int b)
{
	ft_putnb(a % b);
}
