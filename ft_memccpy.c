/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:44:54 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 16:34:28 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memccpy(unsigned char *dst, const unsigned char *src,
		int c, size_t n)
{
	if (!dst || !src)
		return (NULL);
	while (*src && n-- && *src != c)
		*(dst++) = *((unsigned char*)(src++));
	return (*src ? (void*)src : NULL);
}
