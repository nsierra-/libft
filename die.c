#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void		die(const char *msg, int exit_code)
{
	write(STDERR_FILENO, msg, ft_strlen(msg));
	exit(exit_code);
}
