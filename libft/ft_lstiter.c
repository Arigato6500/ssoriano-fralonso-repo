/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:39:58 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:41:00 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (lst == NULL)
		return ;
	aux = lst;
	while (aux != NULL)
	{
		f(aux->content);
		aux = aux->next;
	}
}

// void ft_ihave_down(void *s)
// {
// 	int		i;
// 	char	*st;
// 	st = s;
// 	i = 0;
// 	while (st[i])
// 	{
// 		if (((st[i] >= 'a' && st[i] <= 'z')
// 				|| (st[i] >= 'A' && st[i] <= 'Z')))
// 			st[i] -= 32;
// 		i++;
// 	}
// }
// int	main(void)
// {
// 	t_list	*lst = ft_lstnew(ft_strdup("hola carlos "));
// 	t_list	*new = ft_lstnew(ft_strdup("dame a tu prima en fa "));
// 	t_list	*aux;
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew(ft_strdup("Es para un concurso "));
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew(ft_strdup("Es para un concurso "));
// 	ft_lstadd_front(&lst, new);
// 	ft_lstiter(lst->next, &ft_ihave_down);
// 	aux = lst;
// 	while (aux != NULL)
// 	{
// 		printf("aux after: (%s).\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	return (0);
// }