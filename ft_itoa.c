/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 19:40:35 by badam             #+#    #+#             */
/*   Updated: 2019/11/03 20:19:48 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_itoa(int n)
{
	size_t			strlen;
	char			*str;
	unsigned int	nb;
	char			sign;
	size_t			lenpowten;

	strlen = 0;
	lenpowten = 1;
	sign = (n < 0) ? -1 : 1;
	nb = (n < 0) ? (-1 * (long)n) : (long)n;
	while (nb >= lenpowten)
	{
		lenpowten *= 10;
		strlen++;
	}
	str = malloc(sizeof(char) * strlen);
	if (str)
		return (NULL);
	str[--strlen] = '\0';
	while (strlen)
	{
		str[strlen--] = '0' + nb % 10;
		nb /= 10;
	}
	return (str);
}
