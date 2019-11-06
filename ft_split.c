/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:36:27 by badam             #+#    #+#             */
/*   Updated: 2019/11/06 19:41:49 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "stdlib.h"
#include "ft_substr.h"

static char	*ft_split_stripchar(char *str, char c)
{
	while (*str && *str == c)
		str++;
	return (str);
}

static char	**ft_split_freeup(char **tab, size_t itemtofreeup)
{
	char **tabcpy;

	tabcpy = tab;
	while (itemtofreeup--)
		free(*(tab++));
	free(tabcpy);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	char	*strcpy;
	size_t	frgmtc;
	size_t	frgmtlen;
	size_t	itemtofreeup;

	frgmtc = 0;
	strcpy = ft_split_stripchar((char*)s, c);
	while (*strcpy)
		if (*(strcpy++) == c && *strcpy != c && *strcpy)
			frgmtc++;
	if (!(tab = malloc((++frgmtc + 1) * sizeof(char*))))
		return (NULL);
	strcpy = ft_split_stripchar((char*)s, c);
	itemtofreeup = 0;
	while (*strcpy)
	{
		frgmtlen = 0;
		while (strcpy[frgmtlen] && strcpy[frgmtlen] != c)
			frgmtlen++;
		if (!(*(tab++) = ft_substr(strcpy, 0, frgmtlen)) && ++itemtofreeup)
			return (ft_split_freeup(tab - itemtofreeup - 1, itemtofreeup));
		strcpy += frgmtlen + 1;
		strcpy = ft_split_stripchar(strcpy, c);
	}
	*tab = (NULL);
	return (tab - frgmtc);
}
