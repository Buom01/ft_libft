/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:44:54 by badam             #+#    #+#             */
/*   Updated: 2019/11/10 20:17:39 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

void	*ft_memccpy(char *dst, const char *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- && src[i - 1] != c)
	{
		dst[i] = src[i];
		i++;
	}
	return (src[i - 1] == c ? (void*)(dst) : NULL);
}
