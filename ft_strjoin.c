/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 18:05:48 by badam             #+#    #+#             */
/*   Updated: 2019/11/01 19:31:29 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strsrccpy;
	size_t	len;
	char	*strdst;
	char	*strdstcpy;

	len = ft_strlen(s1) + ft_strlen(s2);
	strdst = malloc(len + 1);
	if (!strdst)
		return (NULL);
	strdstcpy = (char*)strdst;
	strsrccpy = (char*)s1;
	while (*strsrccpy)
		*(strdstcpy++) = *(strsrccpy++);
	strsrccpy = (char*)s2;
	while (*strsrccpy)
		*(strdstcpy++) = *(strsrccpy++);
	*strdstcpy = '\0';
	return (strdst);
}
