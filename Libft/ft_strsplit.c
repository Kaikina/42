/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:32:03 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/14 17:32:38 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_count_words(const char *s, char c)
{
	int		nb;
	int		word;

	word = 0;
	nb = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			nb++;
		}
		s++;
	}
	return (nb);
}

static int		ft_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		words;
	int		i;

	i = 0;
	words = ft_count_words((const char *)s, c);
	if (!(t = (char **)malloc(sizeof(*t) *
					(ft_count_words((const char *)s, c) + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c && *s)
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_word_len((const char *)s, c));
		s = s + ft_word_len(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
