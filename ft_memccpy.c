/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:44:54 by badam             #+#    #+#             */
/*   Updated: 2019/11/10 20:21:43 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*srccpy;
	unsigned char	*dstcpy;
	unsigned char	ccpy;

	dstcpy = (unsigned char*)dst;
	srccpy = (unsigned char*)src;
	ccpy = (unsigned char)c;
	while (n-- && *(srccpy - 1) != ccpy)
		*(dstcpy++) = *(srccpy++);
	return (*(srccpy - 1) == ccpy ? (void*)(dstcpy) : NULL);
}
