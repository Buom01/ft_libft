/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <badam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:17:15 by badam             #+#    #+#             */
/*   Updated: 2019/11/03 19:07:27 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "ft_strchr.h"
#include "ft_strrchr.h"
#include "ft_substr.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*scpy;
	size_t	trimdlen;
	size_t	trimbgn;

	scpy = (char*)s1;
	trimdlen = 0;
	while (ft_strchr(set, (int)(*scpy)))
		scpy++;
	trimbgn = scpy - (char*)s1;
	while (*(scpy + 1))
		scpy++;
	while (ft_strrchr(set, (int)(*scpy)))
		scpy--;
	trimdlen = scpy - (char*)s1 - trimbgn + 1;
	return (ft_substr(s1, trimbgn, trimdlen));
}
