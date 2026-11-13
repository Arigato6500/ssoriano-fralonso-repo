/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:24:26 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/01 13:50:15 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*nwl;

// 	nwl = malloc(sizeof(t_list));
// 	nwl->content = content;
// 	nwl->next = NULL;
// 	return (nwl);
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	t_list			*aux;

// 	if (lst == NULL)
// 		return (lst);
// 	aux = lst;
// 	while (aux->next != NULL)
// 		aux = aux->next;
// 	return (aux);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	if ((*lst)->next == NULL)
	{
		(*lst)->next = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	if (aux)
		aux->next = new;
}

// int main(void)
// {
// 	t_list	*lst = ft_lstnew("hola carlos");
// 	t_list	*new = ft_lstnew("fa");
// 	printf("lst: {%s}", (char *)lst->content);
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstlast(lst);
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// 	lst = lst->next;
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// 	new = ft_lstnew("RE");
// 	ft_lstadd_back(&lst, new);
// 	lst = lst->next;
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// 	new = ft_lstnew("RA");
// 	ft_lstadd_back(&lst, new);
// 	lst = lst->next;
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// }