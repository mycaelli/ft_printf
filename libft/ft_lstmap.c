/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 05:46:39 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/28 19:10:34 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew_(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(1 * sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

static void	ft_lstadd_back_(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!(*lst))
		*lst = new;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

static void	ft_lstclear_(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	while ((*lst))
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_list;

	node = NULL;
	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew_(f(lst->content));
		if (!node)
		{
			ft_lstclear_(&node, del);
			return (NULL);
		}
		else
			ft_lstadd_back_(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
