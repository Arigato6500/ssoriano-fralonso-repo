/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:00:50 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 16:10:30 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*aux;
	int		lens;

	if (!s1 || !s2)
		return (NULL);
	lens = (ft_strlen((char *)s2) + ft_strlen((char *)s1));
	joined = malloc(sizeof(char) * (lens + 1));
	if (!joined)
		return (NULL);
	aux = joined;
	while (*s1)
		*aux++ = *s1++;
	while (*s2)
		*aux++ = *s2++;
	*aux = '\0';
	return (joined);
}

// int main(void)
// {
// 	char	*con = ft_strjoin("Ho", "Ho");
// 	printf("%s\n", con);
// }
