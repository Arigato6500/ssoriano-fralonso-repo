/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 10:39:05 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/02 12:00:31 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size)
	{
		while (--size && *src)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (len);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char dest[20];
    char tests[] = "Hola5656"; 
	printf("len = %u\n", ft_strlcpy(dest, tests, 6));
	printf("dest = %s\n", dest);
    return 0;
}
*/