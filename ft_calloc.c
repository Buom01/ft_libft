/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:58:33 by badam             #+#    #+#             */
/*   Updated: 2019/11/01 17:15:47 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			totalsize;

	totalsize = count * size;
	mem = malloc(totalsize);
	if (!mem)
		return (NULL);
	while (totalsize--)
		*(mem + totalsize) = 0;
	return ((void*)mem);
}
