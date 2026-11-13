/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:00:40 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 13:19:24 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	char	acter;

	acter = (char)c;
	string = (char *)s;
	while (*string)
	{
		if (acter == *string)
			return (string);
		string++;
	}
	if (acter == *string)
		return (string);
	return (0);
}

// int main(void)
// {
// 	char 	str[] = "Hola xd";
// 	char	s[] = "Miau";
// 	char	*acter = ft_strchr(str, 'o');
// 	char	*car = strchr(s, 'i');
// 	printf("Caracter: %s...\n", acter);
// 	printf("Caracter: %s...\n", car);
// }