/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 19:15:56 by badam             #+#    #+#             */
/*   Updated: 2019/11/03 19:39:30 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strchr.h"
#include "ft_strrchr.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = malloc(sizeof(char*) * 3);
	if (!tab)
		return (NULL);
	tab[0] = ft_strchr(s, (int)c);
	if (!tab[0])
		return (NULL);
	tab[1] = ft_strrchr(s, (int)c);
	if (!tab[1])
		return (NULL);
	tab[2] = NULL;
	return (tab);
}
