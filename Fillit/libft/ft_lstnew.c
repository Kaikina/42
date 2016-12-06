/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:34:50 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/17 10:46:17 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list) * (content_size + 1))))
		return (NULL);
	if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
		tmp->next = NULL;
	}
	else
	{
		tmp->content = (void *)malloc(content_size);
		tmp->content = ft_memcpy(tmp->content, (void*)content, content_size);
		tmp->content_size = content_size;
		tmp->next = NULL;
	}
	return (tmp);
}
