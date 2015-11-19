/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 02:50:15 by                   #+#    #+#             */
/*   Updated: 2015/11/19 02:52:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_tab_size(const char **tab)
{
	size_t	ret;

	ret = 0;
	while (*(tab++))
		++ret;
	return (ret);
}