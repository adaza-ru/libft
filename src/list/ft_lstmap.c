/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 23:05:08 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 23:05:08 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_list(t_list **lst, void (*del)(void *), void *content)
{
	if (content != NULL)
		del(content);
	ft_lstclear(lst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;
	void	*ncontent;

	if (!lst || !f)
		return (NULL);
	nlist = NULL;
	while (lst != NULL)
	{
		ncontent = f(lst->content);
		if (!ncontent)
		{
			free_list(&nlist, del, NULL);
			return (NULL);
		}
		nnode = ft_lstnew(ncontent);
		if (!nnode)
		{
			free_list(&nlist, del, ncontent);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
