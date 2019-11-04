/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:13:52 by badam             #+#    #+#             */
/*   Updated: 2019/11/04 16:21:44 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_lstlast_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	ft_lstlast(*alst)->next = new;
}
