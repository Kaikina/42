/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:07:29 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/08 14:51:05 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] < s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] > s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
