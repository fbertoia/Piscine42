/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:56:15 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/07 15:14:09 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1)
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2 && !*str1)
		return (0);
	return (*str1 - *str2);
}

int		main(int argc, char **argv)
{
	char	*ptr;
	int		i;

	i = 1;
	while (i < argc - 1 && argc > 2)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ptr = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = ptr;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
