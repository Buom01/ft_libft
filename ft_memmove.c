/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:21:56 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 17:58:57 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dstbgn;
	unsigned char *dstcpy;
	unsigned char *dstcpybgn;

	dstbgn = (unsigned char*)dst;
	dstcpy = malloc(ft_strlen((const char*)dst) * sizeof(*dst));
	dstcpybgn = dstcpy;
	while (*((unsigned char*)dst))
		*(dstcpy++) = *((unsigned char*)(dst++));
	dst = dstbgn;
	while (*((unsigned char*)src) && len-- && *((unsigned char*)(dst + 1)) == 0)
		*((unsigned char*)(dst++)) = *((unsigned char*)(src++));
	return (dstcpybgn);
}
