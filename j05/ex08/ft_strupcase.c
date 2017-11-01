/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 15:27:41 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/05 15:27:57 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 97 && *tmp <= 122)
			*tmp -= 32;
		tmp++;
	}
	return (str);
}