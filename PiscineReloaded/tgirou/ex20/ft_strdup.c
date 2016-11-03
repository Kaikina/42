/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:50:21 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/03 13:10:32 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*newstr;
	int		strlen;

	i = 0;
	strlen = ft_strlen(src);
	newstr = (char *)malloc((strlen + 1) * sizeof(*src));
	while (i < strlen)
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[strlen] = '\0';
	return (newstr);
}
