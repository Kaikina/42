/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 10:30:23 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/05 10:35:48 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		control_params(int params)
{
	if (params < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (params > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;

	if (control_params(argc) == 0)
	{
		fd = open(argv[1], O_RDONLY);
		display_file(fd);
		close(fd);
	}
	else
		return (1);
	return (0);
}
