/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:17:47 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/17 10:11:12 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (n--)
	{
		if ((s1[i]) == (char)c)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
