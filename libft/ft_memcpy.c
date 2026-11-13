/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:13:05 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 12:28:39 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	const unsigned char	*srca;
	unsigned char		*desa;

	if (!dest && !src)
		return (NULL);
	desa = (unsigned char *)dest;
	srca = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*desa++ = srca[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*str = "Hallo du bist sehr schön!!";
// 	char	copy[30];
// 	ft_memcpy(copy, str, 30);
// 	printf("The copy: %s.\n", copy);
// }
