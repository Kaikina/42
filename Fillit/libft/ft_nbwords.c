/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 09:56:12 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/16 11:13:20 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbwords(char *s, char c)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (*s)
	{
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		else if (*s == c && word == 1)
			word = 0;
		s++;
	}
	return (i);
}
