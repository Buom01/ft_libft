/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 19:15:56 by badam             #+#    #+#             */
/*   Updated: 2019/11/05 17:17:16 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strchr.h"
#include "ft_strlcpy.h"

char	**ft_split_free(char **tab, size_t ntofree)
{
	while (ntofree--)
		free(*(tab + ntofree));
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**tabcpy;
	size_t	strc;
	char	*strcpy;
	size_t	substrlen;

	strc = 0;
	strcpy = (char*)s;
	while (*strcpy)
		if (*(strcpy++) == c)
			strc++;
	if (!(tab = malloc(sizeof(char*) * (++strc + 1))))
		return (NULL);
	strcpy = (char*)s;
	tabcpy = tab;
	while (--strc)
	{
		substrlen = ft_strchr(strcpy, (int)c) - strcpy;
		if (!ft_strlcpy((*(tabcpy++) = malloc(substrlen * sizeof(char))),
				(const char*)strcpy, substrlen))
			return (ft_split_free(tab, tabcpy - tab - 1));
		strcpy += substrlen;
	}
	*tabcpy = NULL;
	return (tab);
}
