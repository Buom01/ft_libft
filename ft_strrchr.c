/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:43:03 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 18:45:59 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char *strcpy;

	strcpy = (unsigned char*)s;
	while (*strcpy)
		strcpy++;
	while (*strcpy != (unsigned char)c)
	{
		if (strcpy == s)
			break;
		strcpy--;
	}
	return (((unsigned char)c == *strcpy) ? strcpy : NULL);
}
