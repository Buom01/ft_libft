/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:16:44 by badam             #+#    #+#             */
/*   Updated: 2019/11/05 20:02:22 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hscpy;
	size_t	ndcur;

	hscpy = (char*)haystack;
	ndcur = 0;
	while (needle[ndcur] && *hscpy && ndcur < len)
	{
		if (needle[ndcur] == *(hscpy++))
			ndcur++;
		else
		{
			hscpy = hscpy - ndcur;
			ndcur = 0;
		}
	}
	if (needle[ndcur] && ndcur < len && ndcur > 0)
		return (hscpy - ndcur);
	else
		return (NULL);
}
