/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:29:15 by badam             #+#    #+#             */
/*   Updated: 2019/11/01 16:37:21 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*hscpy;
	unsigned char	needle;
	size_t			cursor;

	hscpy = (unsigned char*)s;
	needle = (unsigned char)c;
	cursor = 0;
	while (*hscpy && cursor++ < n)
		if (*(hscpy++) == c)
			return (--hscpy);
	return (NULL);
}
