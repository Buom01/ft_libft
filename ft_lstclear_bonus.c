/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:03:49 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 17:11:58 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_lstdelone_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*next;

	next = *lst;
	while (next)
	{
		ft_lstdelone(next, del);
		next = (*lst)->next;
	}
}
