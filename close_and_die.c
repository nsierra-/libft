#include <unistd.h>
#include "libft.h"

void		close_and_die(int fd, const char *msg)
{
	close(fd);
	die(msg);
}