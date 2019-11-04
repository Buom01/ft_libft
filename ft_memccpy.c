/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:44:54 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 17:46:53 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memccpy(void *dst, const void *src,	int c, size_t n)
{
	if (!dst || !src)
		return (NULL);
	while (*((unsigned char*)src) && n-- && *((unsigned char*)src) != c)
		*((unsigned char*)(dst++)) = *((unsigned char*)(src++));
	return (*((unsigned char*)src) ? (void*)src : NULL);
}
