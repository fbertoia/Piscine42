/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:36:02 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/11 17:36:04 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_of_array(int argc, char **argv, int i, int j)
{
	int length;

	length = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			length++;
			j++;
		}
		length++;
		j = 0;
		i++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*arr;
	int		i;
	int		j;
	int		length;

	length = size_of_array(argc, argv, 0, 0);
	arr = (char *)malloc(sizeof(char) * length);
	i = 1;
	j = 0;
	length = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			arr[length] = argv[i][j++];
			length++;
		}
		if (i < argc - 1)
			arr[length++] = '\n';
		else
			arr[length] = 0;
		j = 0;
		i++;
	}
	return (arr);
}
