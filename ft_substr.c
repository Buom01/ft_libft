/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:46:03 by badam             #+#    #+#             */
/*   Updated: 2019/11/01 18:01:54 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strcpy;
	size_t	newstrlen;
	char	*newstr;
	char	*newstrcpy;

	strcpy = (char*)(s + start);
	newstrlen = 0;
	while (*(strcpy++))
		newstrlen++;
	if (len < newstrlen)
		newstrlen = len;
	newstr = malloc(newstrlen + 1);
	if (!newstr)
		return (NULL);
	strcpy = (char*)(s + start);
	newstrcpy = strcpy;
	while (newstrlen--)
		*(newstrcpy++) = *(strcpy++);
	*newstrcpy = '\0';
	return (newstr);
}
