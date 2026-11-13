/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:02:21 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:39:57 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nwl;

	nwl = malloc(sizeof(t_list));
	nwl->content = content;
	nwl->next = NULL;
	return (nwl);
}

// int main(void)
// {
// 	t_list *lista;
// 	lista = ft_lstnew("Dame a tu prima Carlos");
// 	printf("Contenido: (%s).\n", (char *)lista->content);
// 	printf("Next: (%s).\n", (char *)lista->next);
// 	return (0);
// }