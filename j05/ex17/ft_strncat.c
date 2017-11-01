/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 18:36:16 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/05 18:36:20 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*tmp;
	int		i;

	tmp = dest;
	i = 0;
	while (*tmp)
	{
		tmp++;
	}
	while (*src && i < nb)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = 0;
	return (dest);
}
