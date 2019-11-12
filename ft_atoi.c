/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:37:41 by badam             #+#    #+#             */
/*   Updated: 2019/11/12 20:20:37 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	nb;
	char	sign;
	char	*c;

	nb = 0;
	sign = 1;
	c = (char*)str;
	while (*c == ' ' || (*c >= '\t' && *c <= '\r'))
		c++;
	if (*c == '-' || *c == '+')
		if (*(c++) == '-')
			sign *= -1;
	while (*c >= '0' && *c <= '9')
		nb = (nb * 10 + (*(c++) - '0') * sign);
	return ((int)nb);
}
