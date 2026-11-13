/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:33:55 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/01 12:58:14 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list lst = ft_lstnew("Carlos");
// 	t_list new = ft_lstnew("Hola");
// 	printf("lst: {%s}", (char *)lst->content);
// 	ft_lstadd_front(&lst, new);
// 	printf("lst new: {%s}", (char *)lst->content);
// 	printf("lst new: {%s}", (char *)lst->next);
// }
