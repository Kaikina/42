/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:28:52 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 16:12:22 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (s1 && s2)
	{
		if (!(new = (char *)malloc(sizeof(char) *
				(ft_strlen(s1) + ft_strlen(s2) + 1))))
			return (NULL);
		ft_strcpy(new, s1);
		ft_strcat(new, s2);
		return (new);
	}
	return (NULL);
}
