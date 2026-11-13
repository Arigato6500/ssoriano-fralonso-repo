/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:09 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/02 19:08:04 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int replz, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		aux[i] = replz;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	int	lista[10];
// 	int		ls[10];
// 	int		replz;

// 	replz = 92;
// 	ft_memset(lista, replz, sizeof(lista));
// 	memset(ls, replz, sizeof(ls));
// 	printf("La lista: %d.\n", lista[0]);
// 	printf("La lista: %d.\n", ls[0]);
// }