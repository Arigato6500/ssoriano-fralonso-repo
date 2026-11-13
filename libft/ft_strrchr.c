/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:32:32 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 16:18:41 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;
	char	acter;

	str = (char *)s;
	acter = (unsigned char)c;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (acter == str[len])
			return (&str[len]);
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>rm_make
// int main(void)
// {
// 	char 	str[] = "A B C A B C A BCD";
// 	char	s[] = "Miau";
// 	char	*acter = ft_strchr(str, 'X');
// 	char	*car = strchr(s, 'L');
// 	printf("Caracter: %s...\n", acter);
// 	printf("Caracter: %s...\n", car);
// }