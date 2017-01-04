/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <tgirou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:05:57 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/17 12:07:36 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	new->content = NULL;
	new->content_size = 0;
	if (content)
	{
		if (!(new->content = ft_memcpy((void *)malloc(content_size),
						content, content_size)))
			return (NULL);
		new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
