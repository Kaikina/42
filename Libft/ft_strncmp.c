/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:21:39 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 14:22:36 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < (int)n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}