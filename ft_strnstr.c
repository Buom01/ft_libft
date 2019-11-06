/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:16:44 by badam             #+#    #+#             */
/*   Updated: 2019/11/06 22:01:42 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hscpy;
	char	*hscpycpy;
	char	*ndcpy;

	hscpy = (char*)haystack;
	while (*hscpy && (len > (size_t)(hscpy - (char*)haystack)))
	{
		ndcpy = (char*)needle;
		hscpycpy = hscpy;
		while (*(hscpycpy++) == *(ndcpy++))
			if (!*ndcpy)
				return (hscpy);
		hscpy++;
	}
	return (NULL);
}
