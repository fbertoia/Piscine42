/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:02:55 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/05 17:02:58 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*tmp)
	{
		tmp++;
	}
	while (*src)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = *src;
	return (dest);
}
