/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 18:54:50 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/05 18:54:53 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				strlength(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				length;

	i = 0;
	length = size;
	while (*dest)
	{
		dest++;
		i++;
		length--;
	}
	if (length < 0)
		return (size + strlength(src));
	while (*src)
	{
		if (length > 1)
			*dest = *src;
		dest++;
		src++;
		i++;
		length--;
	}
	*dest = 0;
	return (i);
}
