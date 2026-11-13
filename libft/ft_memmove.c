/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:03:42 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 13:11:33 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		ft_memcpy(d, s, n)
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
	return (ft_if_else(s, d, n));
}

// int	main(void)
// {
// 	int		i = 0;
// 	char		dest[20];
// 	char		src[] = "Hallo chon";
// 	ft_memmove(dest, src, sizeof(src));
// 	while (i < 10)
// 	{
// 		printf("Fuente = %s...\n", src);
// 		printf("Destino = %s...\n", dest);
// 		i++;
// 	}
// }
