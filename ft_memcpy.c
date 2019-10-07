/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:38:41 by badam             #+#    #+#             */
/*   Updated: 2019/10/07 16:26:13 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memcpy(unsigned char *dst, const unsigned char *src, size_t n)
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
	while (*src && n--)
		*(dst++) = *((unsigned char*)(src++));
	return (dstcpybgn);
}
