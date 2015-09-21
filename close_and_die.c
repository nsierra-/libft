#include <unistd.h>
#include "libft.h"

void		close_and_die(int fd, const char *msg, int exit_code)
{
	close(fd);
	die(msg, exit_code);
}
