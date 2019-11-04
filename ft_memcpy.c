/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:38:41 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 02:22:29 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dstcpy;
	void	*srccpy;

	dstcpy = dst;
	srccpy = (void*)src;
	while (n--)
		*((unsigned char*)dstcpy++) = *((unsigned char*)(srccpy++));
	return (dst);
}
