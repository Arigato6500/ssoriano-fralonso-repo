/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:59:13 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:40:24 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	aux = lst;
	lst = (lst)->next;
	del(aux);
}

// void	ft_deletall(void *deleted)
// {
// 	free(deleted);
// }
// int	main(void)
// {
// 	t_list	*lst = ft_lstnew("hola carlos");
// 	t_list	*new = ft_lstnew("dame a tu prima en fa");
// 	t_list	*aux;
// 	unsigned int	i;

// 	i = 0;
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("Es para un concurso");
// 	ft_lstadd_back(&lst, new);
// 	aux = lst;
// 	while (i < ft_lstsize(aux) - 1)
// 	{
// 		printf("lst first: {%s}.\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	ft_lstdelone(lst, &ft_deletall);
// 	aux = lst;
// 	while (i < ft_lstsize(aux) - 1)
// 	{
// 		printf("lst first: {%s}.\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// }