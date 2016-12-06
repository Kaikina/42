/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:34:25 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/17 10:01:03 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		while (s1 && s2)
		{
			if (s1[i] == s2[i] && i <= n)
			{
				if ((s1[i] == '\0' && s2[i] == '\0') || i == (n - 1))
					return (1);
				i++;
			}
			else
				return (0);
		}
	}
	return (1);
}
