/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:13:40 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/15 15:50:50 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new;

	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s)
	{
		if (new)
		{
			new = ft_strncpy(new, s + start, len);
			new[len] = '\0';
		}
		return (new);
	}
	return (NULL);
}
