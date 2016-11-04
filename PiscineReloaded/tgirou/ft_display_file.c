#include <unistd.h>
#include <fcnt1.h>

void	display_file(int fd)
{
	char	buffer;

	while (read(fd, buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		control_params(int params)
{
	if (params < 2)
		write(2, "File name missing.\n", 19);
	else if (params > 2)
		write(2, "Too many arguments.\n", 20);
	else
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
	return (0);
}
