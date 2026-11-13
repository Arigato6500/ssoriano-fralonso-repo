/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:27:54 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/02 12:03:26 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
	return ;
}

// int main(void)
// {
// 	char	lista[] = "ABCDE";

// 	ft_bzero(lista + 2, 4);
// 	printf("La lista: %s.\n", lista);
// }