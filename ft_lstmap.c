/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:52:06 by egomes            #+#    #+#             */
/*   Updated: 2021/02/26 15:17:44 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	if (!(start = ft_lstnew(f(lst->content))))
		return (NULL);
	temp = lst->next;
	while (temp)
	{
		if (!(new = ft_lstnew(f(temp->content))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		temp = temp->next;
	}
	return (start);
}
