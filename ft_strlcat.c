/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:16:46 by badam             #+#    #+#             */
/*   Updated: 2019/11/09 21:08:30 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "ft_strlen.h"
#include "stdio.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dstcpy;
	char	*srccpy;
	size_t	len;

	dstcpy = (char*)dst;
	srccpy = (char*)src;
	len = ft_strlen(dstcpy);
	if (!dstsize && !ft_strlen(srccpy))
		return (0);
	dstcpy += len;
	if (len <= dstsize)
	{
		dstsize = ((size_t)(dstsize - len) > dstsize) ? (0) : (dstsize - len);
		while (*srccpy && dstsize && --dstsize && ++len)
		{
			printf("\n%s; ", srccpy);
			*(dstcpy++) = *(srccpy++);
		}
		if (dstsize)
			*dstcpy = '\0';
		while (*(srccpy++))
			len++;
	}
	else
		len += dstsize;
	return (len);
}
