/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 23:08:03 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/04 23:08:26 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*tmp;
	void	*null;

	i = 0;
	if (!to_find[i])
		return (str);
	while (*str)
	{
		tmp = str;
		while (tmp[i] == to_find[i] && tmp[i] && to_find[i])
		{
			i++;
		}
		if (to_find[i] == 0)
			return (tmp);
		i = 0;
		str++;
	}
	null = 0;
	return (null);
}
