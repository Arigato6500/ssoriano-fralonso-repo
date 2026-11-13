/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:24:18 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:30:06 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list			*aux;
	t_list			**temp;

	temp = lst;
	while ((*temp)->next != NULL)
	{
		aux = *temp;
		*temp = (*temp)->next;
		del(aux);
	}
}

//void	ft_deletall(void *deleted)
//{
//	if (ft_strncmp("hola", deleted, 5) == 0)
//		free(deleted);
//}
//int	main(void)
//{
//	t_list			*lst = ft_lstnew("hola carlos");
//	t_list			*new = ft_lstnew("dame a tu prima en fa");
//	ft_lstadd_back(&lst, new);
//	new = ft_lstnew("Es para un concurso");
//	ft_lstadd_back(&lst, new);
//	new = ft_lstnew(">:(");
//	ft_lstadd_back(&lst, new);
//	printf("lst size before clear: {%d}.\n",  ft_lstsize(lst));
//	ft_lstclear(&lst, &ft_deletall);
//	printf("lst size after clear: {%d}.\n", ft_lstsize(lst));
//}