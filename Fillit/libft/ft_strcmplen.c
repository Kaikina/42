/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmplen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:25:08 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/15 16:38:54 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmplen(char *s1, char *s2)
{
	int lens1;
	int lens2;

	if (!s1 && !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (lens1 > lens2)
		return (1);
	if (lens2 > lens1)
		return (2);
	else
		return (0);
}
