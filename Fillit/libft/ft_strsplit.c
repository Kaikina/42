/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:48:56 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/16 14:20:33 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lenword(char *word, char c)
{
	int len;

	len = 0;
	while (*word != c && *word != '\0')
	{
		word++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_nbwords((char *)s, c);
	if (!(new = (char **)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	i = 0;
	while (len--)
	{
		while (*s != '\0' && *s == c)
			s++;
		new[i] = ft_strsub((char *)s, 0, ft_lenword((char *)s, c));
		if (!new[i])
			return (NULL);
		i++;
		s = s + ft_lenword((char *)s, c);
	}
	new[i] = NULL;
	return (new);
}
