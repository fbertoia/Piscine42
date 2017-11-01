/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 21:22:06 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/11 21:22:08 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		size_of_word(char *str, int i, int counter)
{
	int biggest_word;

	biggest_word = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
		{
			counter++;
			i++;
		}
		if (counter > biggest_word)
			biggest_word = counter;
		counter = 0;
		if (str[i])
			i++;
	}
	return (biggest_word + 1);
}

int		number_of_word(char *str, int i, int flag, int number_of_word)
{
	while (str[i])
	{
		if (str[i] && (str[i] == '+' || str[i] == '-' || str[i] == ')' ||
		str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '('))
		{
			number_of_word++;
		}
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			if (flag)
			{
				number_of_word++;
				flag = 0;
			}
			i++;
		}
		if (str[i] && flag == 1)
			i++;
		flag = 1;
	}
	return (number_of_word + 1);
}

void	array_wording_second(char **arr, char *str, int i, int *j)
{
	int k;

	k = 0;
	if (str[i] && (str[i] == '+' || str[i] == '-' ||
	str[i] == '*' || str[i] == '/' || str[i] == '%' ||
	str[i] == '(' || str[i] == ')'))
	{
		arr[*j][k] = str[i];
		arr[*j][1] = 0;
		*j = *j + 1;
	}
}

char	**array_wording(char **arr, char *str, int i, int j)
{
	int k;

	k = 0;
	while (str[i])
	{
		while ((str[i] && str[i] <= '9' && str[i] >= '0') || (str[i] == '-'
		&& str[i + 1] != ' '))
		{
			while ((str[i] && str[i] <= '9' && str[i] >= '0') || (str[i] == '-'
			&& str[i + 1] != ' '))
			{
				arr[j][k] = str[i];
				k++;
				i++;
			}
			arr[j][k] = 0;
			j++;
			k = 0;
		}
		array_wording_second(arr, str, i, &j);
		if (str[i])
			i++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		i;

	i = 0;
	arr = NULL;
	if (str == NULL)
	{
		arr = (char **)malloc(sizeof(char *) * 1);
		arr[0] = NULL;
		return (arr);
	}
	arr = (char **)malloc(sizeof(char *) * number_of_word(str, 0, 1, 0));
	while (i < number_of_word(str, 0, 1, 0))
	{
		arr[i] = (char *)malloc(sizeof(char) * size_of_word(str, 0, 0));
		i++;
	}
	arr = array_wording(arr, str, 0, 0);
	return (arr);
}
