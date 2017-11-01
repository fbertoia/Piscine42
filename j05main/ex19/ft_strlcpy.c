/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 17:13:03 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/06 17:13:06 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		i++;
	}
	while (*src)
	{
		src++;
		i++;
	}
	*dest = 0;
	return (i);
}
