/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:43:03 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 19:02:35 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char *strcpy;

	strcpy = (unsigned char*)s;
	while (*strcpy)
		strcpy++;
	while (*strcpy != (unsigned char)c)
	{
		if (strcpy == (unsigned char*)s)
			break;
		strcpy--;
	}
	return (((unsigned char)c == *strcpy) ? (char*)strcpy : NULL);
}
