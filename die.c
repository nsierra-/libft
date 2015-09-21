#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void		die(const char *msg)
{
	write(STDERR_FILENO, msg, ft_strlen(msg));
	exit(EXIT_FAILURE);
}