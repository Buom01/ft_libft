/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:23:08 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 18:44:51 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (((unsigned char)c == *strcpy) ? strcpy : NULL);
}
