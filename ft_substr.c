/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:46:03 by badam             #+#    #+#             */
/*   Updated: 2019/11/05 20:30:24 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_strlen.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strcpy;
	size_t	newlen;
	char	*substr;
	char	*substrcpy;

	strcpy = (char*)s + start;
	newlen = ft_strlen(strcpy);
	if (newlen > len)
		newlen = len;
	if (!(substr = malloc((newlen + 1) * sizeof(char))))
		return (NULL);
	substrcpy = substr;
	while (newlen--)
		*(substr++) = *(strcpy++);
	*substr = '\0';
	return (substrcpy);
}
