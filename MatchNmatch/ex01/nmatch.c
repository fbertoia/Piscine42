/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 13:44:43 by fbertoia          #+#    #+#             */
/*   Updated: 2017/09/10 13:44:49 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
static int k = 0;

	if (*s2 == 0)
	{
		k = k + 1;	
		return (*s1 == 0);
	}
	if (*s1 == 0 && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '*')
		return(nmatch(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	if (*s1 != *s2)
		return (0);
	return (1);
}

// int		nmatch(char *s1, char *s2)
// {
// 	static int k = 0;

// 	if ((*s1 == 0 && *s2 == 0) || (*s1 == 0 && *s2 == '*' && *(s2 + 1) == 0))
// 	{
// 		k = k + 1;	
// 		return (1);
// 	}
// 	if ((*s1 != 0 && *s2 == 0) || (*s1 == 0 && *s2 != '*' && *(s2 + 1) != 0))
// 		return (0);
// 	if (*s1 == *s2)
// 		nmatch(s1 + 1, s2 + 1);
// 	if (*s2 == '*')
// 	{
// 		if (s2[1] == '*')
// 			return (nmatch(s1, s2 + 1));
// 		if (nmatch(s1 + 1, s2 + 1))
// 			return (nmatch(s1 + 1, s2 + 1));
// 		if (nmatch(s1, s2 + 1))
// 			return (nmatch(s1, s2 + 1));
// 		if (nmatch(s1 + 1, s2))
// 			return (nmatch(s1 + 1, s2));
// 	}
// 	if (*s1 != *s2)
// 		return (0);
// 	return (k);
// }