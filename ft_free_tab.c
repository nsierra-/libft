#include <stdlib.h>
#include "libft.h"

void		ft_free_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}
