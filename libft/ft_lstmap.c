/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:59:40 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:42:53 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_altchr(void *s)
// {
// 	int		i;
// 	char 	*str;

// 	str = (char *)s;
// 	i = 0;
// 	while (*str)
// 	{
// 		*str -= 32;
// 		str++;
// 	}
// }
// stactic void	ft_deletall(void *deleted)
// {
// 		free(deleted);
// }
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newel;
	t_list	*newlist;
	void	*newcont;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newcont = f(lst->content);
		newel = ft_lstnew(newcont);
		if (!newel)
		{
			del(newcont);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_front(&newlist, newel);
		lst = lst->next;
	}
	return (newlist);
}

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew("hola carlos");
// 	t_list	*new = ft_lstnew("dame a tu prima en fa");
// 	t_list	*aux;
// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew("Es para un concurso");
// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew(">:(");
// 	ft_lstadd_front(&lst, new);
// 	aux = ft_lstmap(lst, &ft_puttr, &ft_deletall);
// 	while (aux != NULL)
// 	{
// 		printf("lst after: {%s}.\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	lst = NULL;
// 	aux = ft_lstmap(lst, &ft_puttr, &ft_deletall);
// }
