/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 21:43:45 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/07 22:39:47 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_replace(char c, char *tabl, char *tabc)
{
	int counter;

	counter = 0;
	if (c >= 'a' && c <= 'z')
	{
		while (c != tabl[counter])
		{
			counter++;
		}
		return (tabl[counter + 16]);
	}
	if (c >= 'A' && c <= 'Z')
	{
		while (c != tabc[counter])
		{
			counter++;
		}
		return (tabc[counter + 16]);
	}
	return (c);
}

char	*assign(char *tab, char *src)
{
	int i;

	i = 0;
	while (i < 52)
	{
		tab[i] = src[i];
		i++;
	}
	return (tab);
}

char	*ft_rot42(char *str)
{
	int		i;
	char	tabl[100];
	char	tabc[100];

	assign(tabl, "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
	assign(tabc, "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ");
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = ft_replace(str[i], tabl, tabc);
		}
		i++;
	}
	return (str);
}
