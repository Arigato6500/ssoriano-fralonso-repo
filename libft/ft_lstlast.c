/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:25:33 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:29:15 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// 	*lst = new;
// }

// t_list *ft_lstnew(void *content)
// {
// 	t_list	*nwl;

// 	nwl = malloc(sizeof(t_list));
// 	nwl->content = content;
// 	nwl->next = NULL;
// 	return (nwl);
// }

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
//{
//	t_list	*lst;
//	t_list	*new;
//	lst = ft_lstnew("Charlie");
//	new = ft_lstnew("Carlos");
//	ft_lstadd_front(&lst, new);
//	new = ft_lstnew("carlitos");
//	ft_lstadd_front(&lst, new);
//	new = ft_lstnew("solrac");
//	ft_lstadd_front(&lst, new);
//	new = ft_lstlast(lst);
//	printf("Last: (%s).\n", (char *)lst->content);
//	printf("Last: (%s).\n", (char *)new->content);
// }