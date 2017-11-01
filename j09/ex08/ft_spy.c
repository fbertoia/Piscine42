/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 09:21:21 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/08 10:15:17 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_sub_strcapitalize(char *tmp, int flag)
{
	while (*tmp)
	{
		while ((*tmp >= 'A' && *tmp <= 'Z') || (*tmp >= 'a' && *tmp <= 'z') ||
				(*tmp >= '0' && *tmp <= '9'))
		{
			if (((*tmp >= 'a' && *tmp <= 'z') || (*tmp >= 'A' && *tmp <= 'Z')
						|| (*tmp >= '0' && *tmp <= '9')) && flag == 1)
			{
				if ((*tmp >= 'a' && *tmp <= 'z'))
					*tmp -= 32;
				flag = 0;
			}
			else
			{
				if (*tmp >= 'A' && *tmp <= 'Z' && flag == 0)
					*tmp += 32;
			}
			tmp++;
		}
		flag = 1;
		tmp++;
	}
	return (tmp);
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;

	tmp = str;
	ft_sub_strcapitalize(tmp, 1);
	return (str);
}

char	*ft_strlowcase(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 'A' && *tmp <= 'Z')
			*tmp += 32;
		tmp++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == ' ')
		s1++;
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	while (*s1 == ' ')
		s1++;
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(ft_strlowcase(argv[i]), "president") == 0 ||
				ft_strcmp(ft_strlowcase(argv[i]), "attack") == 0 ||
				ft_strcmp(ft_strcapitalize(argv[i]), "Bauer") == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		i++;
	}
	return (0);
}
