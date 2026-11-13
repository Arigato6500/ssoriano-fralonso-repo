/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:37:06 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 13:53:32 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*set1;
	unsigned char	*set2;
	size_t			i;

	set1 = (unsigned char *)s1;
	set2 = (unsigned char *)s2;
	i = 0;
	if (0 == n)
		return (0);
	while (i < n)
	{
		if (set1[i] != set2[i])
			return (set1[i] - set2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	s1[] = "Hola xddd";
// 	char	s2[] = "Hola xddd";
// 	int		i;
// 	i = ft_memcmp(s1, s2, 9);
// 	printf("Resultado: %d...\n", i);
// }