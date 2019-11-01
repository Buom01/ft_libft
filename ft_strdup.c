/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:17:02 by badam             #+#    #+#             */
/*   Updated: 2019/11/01 17:38:15 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *s1)
{
	size_t	strlen;
	char	*strdup;
	size_t	strdupcur;

	strlen = 0;
	while (s1[strlen])
		strlen++;
	strdup = malloc(strlen + 1);
	if (!strdup)
		return (NULL);
	strdupcur = 0;
	while (strdupcur < strlen)
	{
		strdup[strdupcur] = s1[strdupcur];
		strdupcur++;
	}
	return (strdup);
}
