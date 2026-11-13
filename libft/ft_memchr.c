/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:01:10 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 16:19:41 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	acter;
	size_t			i;

	acter = (unsigned char)c;
	string = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (acter == *string)
			return (string);
		string++;
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char	str[] = "";
// 	char	str2[] = "";
// 	char *acter = ft_memchr(str, 'o', sizeof(str));
// 	printf("Caracter: %s...", acter);
// 	char *macter = memchr(str2, 'o', sizeof(str));
// 	printf("Caracter: %s...", macter);
// }