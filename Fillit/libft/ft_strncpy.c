/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:08:26 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/09 16:35:08 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *cpy_dest;

	cpy_dest = dest;
	while (n > 0 && *src)
	{
		*cpy_dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*cpy_dest++ = '\0';
		n--;
	}
	return (dest);
}
