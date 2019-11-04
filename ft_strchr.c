/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:23:08 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 19:00:50 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char *strcpy;

	strcpy = (unsigned char*)s;
	while (*strcpy != (unsigned char)c)
	{
		if (!(*strcpy))
			break;
		strcpy++;
	}
	return (((unsigned char)c == *strcpy) ? (char*)strcpy : NULL);
}
