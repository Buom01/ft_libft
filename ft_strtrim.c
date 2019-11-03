/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <badam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:17:15 by badam             #+#    #+#             */
/*   Updated: 2019/11/03 13:42:52 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*scpy;
	char	*setcpy;
	size_t	trimdlen;
	size_t	trimbgn;

	scpy = s1;
	trimdlen = 0;
	trimbgn = 0;


	// On delete tout ça et on recommence :
	while (*scpy)
	{
		setcpy = set;
		while (*setcpy)
		{
			if (*setcpy == *scpy)
			{
				trimdlen++;
				break;
			}
			setcpy++;
		}
		scpy++;
	}
}
