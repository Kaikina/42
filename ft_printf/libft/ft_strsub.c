/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:15:05 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 16:10:11 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (s)
	{
		if (!(new = ft_strnew(len)))
			return (NULL);
		new = ft_strncpy(new, s + start, len);
		new[len] = '\0';
		return (new);
	}
	return (NULL);
}
