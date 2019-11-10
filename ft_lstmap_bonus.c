/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 23:04:05 by badam             #+#    #+#             */
/*   Updated: 2019/11/10 23:43:13 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_lstclear_bonus.h"

t_list		*ft_lstmap_free(t_list **nl, void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(nl, del);
	return (NULL);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstcpy;
	t_list	*newlst;
	t_list	*nlcpy;
	void	*nlcpycontent;

	lstcpy = lst;
	nlcpy = 0;
	while (lstcpy)
	{
		if(!(nlcpycontent = f(lstcpy->content)))
			return (ft_lstmap_free(&newlst, (void *)0, del));
		if (!(nlcpy = ft_lstnew(nlcpycontent)))
			return (ft_lstmap_free(&newlst, nlcpycontent, del));
		if (!newlst)
			newlst = nlcpy;
		lstcpy = lstcpy->next;
		nlcpy = nlcpy->next;
	}
	return (newlst);
}
