/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <badam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 22:55:29 by badam             #+#    #+#             */
/*   Updated: 2021/12/01 23:06:11 by bastien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t dstsize, size_t srcsize)
{
	void	*ptr2;

	if (dstsize)
	{
		ptr2 = malloc(dstsize);
		if (!ptr2)
			return (NULL);
		if (ptr)
		{
			if (srcsize <= dstsize)
				ft_memcpy(ptr2, ptr, srcsize);
			else
				ft_memcpy(ptr2, ptr, dstsize);
		}
	}
	if (ptr)
		free(ptr);
	return (ptr2);
}
