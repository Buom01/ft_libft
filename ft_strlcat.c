/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:16:46 by badam             #+#    #+#             */
/*   Updated: 2019/10/30 14:46:06 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		len;
	char	*srccpy;

	srccpy = (char*)src;
	len = 0;
	while (*dst && dstsize-- && ++len)
		dst++;
	if (dstsize)
	{
		while (*srccpy && --dstsize && ++len)
			*(dst++) = *(srccpy++);
		if (dstsize)
			*dst = '\0';
	}
	else
		while (*dst && ++len)
			dst++;
	while (*(srccpy++))
		len++;
	return (len);
}
