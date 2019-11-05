/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:44:54 by badam             #+#    #+#             */
/*   Updated: 2019/11/05 19:47:24 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*srccpy;

	if (!dst || !src)
		return (NULL);
	srccpy = (unsigned char*)src;
	while (n-- && *(srccpy - 1) != (unsigned char)c)
		*((unsigned char*)(dst++)) = *(srccpy++);
	return (*srccpy == (unsigned char)c) ? (void*)(++dst) : NULL);
}
