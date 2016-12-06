/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:57:17 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/07 18:27:00 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int i;
	int j;

	j = 0;
	if (aiguille[j] == '\0')
		return ((char *)meule_de_foin);
	while (meule_de_foin[j])
	{
		i = 0;
		while (meule_de_foin[i + j] == aiguille[i] && meule_de_foin[i + j])
		{
			if (aiguille[i + 1] == '\0')
				return ((char *)&meule_de_foin[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
