#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "private/gnl.h"

int			for_each_line_file(
				const char *file_path,
				int (*f)(const char *, void *),
				int oflag,
				void *param)
{
	int		fd;
	int		user_ret;
	char	*line;

	if ((fd = open(file_path, oflag)) < 0)
		return (-1);
	while (get_next_line(fd, &line) > 0)
	{
		if ((user_ret = f(line, param)) != 0)
		{
			free(line);
			close(fd);
			return (user_ret);
		}
		free(line);
	}
	close(fd);
	return (0);
}
