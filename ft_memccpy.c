/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:44:54 by badam             #+#    #+#             */
/*   Updated: 2019/11/10 19:58:18 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*srccpy;

	srccpy = (unsigned char*)src;
	while (n-- && *(srccpy - 1) != (unsigned char)c)
		*((unsigned char*)(dst++)) = *(srccpy++);
	return (*(srccpy - 1) == (unsigned char)c ? (void*)(dst) : NULL);
}
