/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:21:56 by badam             #+#    #+#             */
/*   Updated: 2019/10/07 16:27:09 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memmove(unsigned char *dst, const unsigned char *src, size_t len)
{
	unsigned char *dstbgn;
	unsigned char *dstcpy;
	unsigned char *dstcpybgn;

	dstbgn = dst;
	dstcpy = malloc(ft_strlen((const char*)dst) * sizeof(*dst));
	dstcpybgn = dstcpy;
	while (*dst)
		*(dstcpy++) = *(dst++);
	dst = dstbgn;
	while (*src && len-- && *(dst + 1) == 0)
		*(dst++) = *((unsigned char*)(src++));
	return (dstcpybgn);
}
