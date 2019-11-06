/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:36:27 by badam             #+#    #+#             */
/*   Updated: 2019/11/06 18:14:32 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "stdlib.h"
#include "ft_substr.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*strcpy;
	size_t	frgmt;
	size_t	frgmtlen;

	frgmt = 0;
	strcpy = (char*)s;
	while (*(strcpy++))
		if (*(strcpy - 1) == c && *(strcpy - 2) != c)
			frgmt++;
	if (!(tab = malloc((frgmt++ + 1) * sizeof (char*))))
		return (NULL);
	strcpy = (char*)s;
	while (*strcpy)
	{
		frgmtlen = 0;
		while (strcpy[frgmtlen] && strcpy[frgmtlen] != c)
			frgmtlen++;
		if (!(*(tab++) = ft_substr(strcpy, 0, frgmtlen)))
		{
			// Free up
			return (NULL);
		}
		strcpy += frgmtlen + 1;
		while (*strcpy && *strcpy == c)
			strcpy++;
	}
	*tab = (NULL);
	return (tab - frgmt);
}
