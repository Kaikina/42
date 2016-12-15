/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <tgirou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:02:12 by tgirou            #+#    #+#             */
/*   Updated: 2016/12/15 16:27:58 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	checkandformatline(char *tmp, char **stock, char **line)
{
	char *tmp1;
	char *tmp2;

	if (!(tmp1 = ft_strchr(tmp, '\n')))
		return (0);
	*tmp1 = 0;
	tmp2 = *line;
	*line = ft_strnew(ft_strlen(tmp) + ft_strlen(tmp2));
	ft_strcpy(*line, tmp2);
	ft_strcat(*line, tmp);
	free(tmp2);
	*stock = ft_strdup(tmp1 + 1);
	return (1);
}

static void	formatline(char **line, char *buf)
{
	char	*tmp;

	if (!(*line))
	{
		*line = ft_strnew(ft_strlen(buf));
		ft_strcpy(*line, buf);
	}
	tmp = *line;
	*line = ft_strnew(ft_strlen(buf) + ft_strlen(tmp));
	ft_strcpy(*line, tmp);
	ft_strcat(*line, buf);
	free(tmp);
}

static int	islineinstock(char **stock, char **line)
{
	char	*tmp;
	char	*buf;

	if (!(buf = ft_strchr(*stock, '\n')))
	{
		*line = ft_strdup(*stock);
		free(*stock);
		*stock = NULL;
	}
	else
	{
		*buf = 0;
		*line = ft_strdup(*stock);
		tmp = *stock;
		*stock = ft_strdup(buf + 1);
		free(tmp);
		tmp = NULL;
		return (1);
	}
	return (0);
}

static char	**lstfd(int fd, t_list **list)
{
	t_list *tmp;

	tmp = *list;
	while (tmp && tmp->content_size != (size_t)fd)
		tmp = tmp->next;
	if (tmp)
		return ((char **)(&(tmp->content)));
	tmp = ft_lstnew(NULL, 0);
	tmp->content_size = (size_t)fd;
	ft_lstadd(list, tmp);
	return ((char **)(&(tmp->content)));
}

int			get_next_line(int const fd, char **line)
{
	static t_list	*list = NULL;
	char			**stock;
	char			tmp[BUFF_SIZE + 1];
	int				read_ret;

	stock = lstfd(fd, &list);
	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	*line = ft_strnew(BUFF_SIZE);
	if (*stock && islineinstock(stock, line))
		return (1);
	while ((read_ret = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		if (read_ret < 0)
			return (-1);
		tmp[read_ret] = 0;
		if (checkandformatline(tmp, stock, line))
			return (1);
		formatline(line, tmp);
	}
	if (!read_ret && (*line)[0])
		return (1);
	return (read_ret);
}
