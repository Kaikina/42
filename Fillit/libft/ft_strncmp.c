/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:53:59 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/08 15:05:43 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (s1[i] < s2[i] && i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if (s1[i] == s2[i] && i < n)
		return (0);
	if (s1[i] > s2[i] && i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
