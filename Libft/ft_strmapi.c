/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:01:17 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 15:55:32 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	fi;
	char	*new;

	if (!s)
		return (NULL);
	if (!(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	fi = 0;
	while (s[i])
	{
		new[i] = (*f)(fi, s[i]);
		fi++;
		i++;
	}
	return (new);
}
