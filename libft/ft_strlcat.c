/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 09:55:38 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/02 12:00:12 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	isrc;
	unsigned int	jdest;
	unsigned int	i;

	isrc = 0;
	jdest = 0;
	i = 0;
	while (dest[jdest] != '\0' && jdest <= size)
		jdest++;
	while (src[isrc] != '\0')
		isrc++;
	if (size <= jdest)
		return (size + isrc);
	while ((src[i] != '\0') && (jdest + i + 1 < size))
	{
		dest[jdest + i] = src[i];
		i++;
	}
	dest[jdest + i] = '\0';
	return (jdest + isrc);
}
/*
#include <stdio.h>

int main(void)
{
	char	dest[] = "Halo";
	printf("Longitud del cat: %d\n", ft_strlcat("Hola", " Como estas?", 0));
	printf("Longitud del cat: %d\n", ft_strlcat(dest, " Como estas?", 30));
	printf("Longitud del cat: %d\n", ft_strlcat(dest, " Como estas?", 15));
}
*/