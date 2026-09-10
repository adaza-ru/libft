/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 22:29:23 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 22:29:23 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nextn;

	if (!lst || !del)
		return ;
	node = lst[0];
	while (node != NULL)
	{
		nextn = node->next;
		del(node->content);
		free(node);
		node = nextn;
	}
	lst[0] = NULL;
}
