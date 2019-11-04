/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:51:34 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 18:48:33 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char*)s1;
	s4 = (unsigned char*)s2;
	while (*s3 == *s4 && *s3 && (n--) > 0)
	{
		s3++;
		s4++;
	}
	return (*s3 - *s4);
}
