/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:16:46 by badam             #+#    #+#             */
/*   Updated: 2019/11/05 21:01:28 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	char	*dstcpy;
	char	*srccpy;

	len = ft_strlen(dst);
	dstcpy = dst + len;
	srccpy = (char*)src;
	if (dstsize)
	{
		dstsize -= len;
		while (--dstsize && *srccpy)
			*(dstcpy++) = *(srccpy++);
		*dst = '\0';
	}
	len += ft_strlen(src);
	return (len);
}
