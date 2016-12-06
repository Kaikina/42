/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:37:17 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/10 19:13:55 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *new;

	new = NULL;
	if (lst && (*f))
	{
		new = (*f)(lst);
		tmp = new;
		while (lst->next)
		{
			tmp->next = (*f)(lst->next);
			if (!tmp)
				return (NULL);
			lst = lst->next;
			tmp = tmp->next;
		}
	}
	return (new);
}
