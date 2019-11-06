/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:36:27 by badam             #+#    #+#             */
/*   Updated: 2019/11/06 19:15:11 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "stdlib.h"
#include "ft_substr.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*strcpy;
	size_t	frgmtc;
	size_t	frgmtlen;

	frgmtc = 0;
	strcpy = (char*)s;
	while (*strcpy && *strcpy == c)
		strcpy++;
	while (*strcpy)
		if (*(strcpy++) == c && *strcpy != c && *strcpy)
			frgmtc++;
	if (!(tab = malloc((++frgmtc + 1) * sizeof (char*))))
		return (NULL);
	strcpy = (char*)s;
	while (*strcpy && *strcpy == c)
		strcpy++;
	while (*strcpy)
	{
		frgmtlen = 0;
		while (strcpy[frgmtlen] && strcpy[frgmtlen] != c)
			frgmtlen++;
		if (!(*(tab++) = ft_substr(strcpy, 0, frgmtlen)))
			return (NULL);  // Need to freeup
		strcpy += frgmtlen + 1;
		while (*strcpy && *strcpy == c)
			strcpy++;
	}
	*tab = (NULL);
	return (tab - frgmtc);
}
