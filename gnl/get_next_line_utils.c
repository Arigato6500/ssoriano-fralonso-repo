/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:45:02 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/20 19:24:50 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	char	acter;

	if (!s)
		return (NULL);
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	char	*aux;
	int		lens;

	if (!s1 || !s2)
		return (NULL);
	lens = (ft_strlen(s2, 0) + ft_strlen(s1, 0));
	joined = malloc(sizeof(char) * (lens + 1));
	if (!joined)
		return (free(s1), NULL);
	aux = joined;
	while (*s1)
		*aux++ = *s1++;
	while (*s2)
		*aux++ = *s2++;
	*aux = '\0';
	free(s1);
	return (joined);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*x;

	if (!src)
		return (NULL);
	len = ft_strlen(src, 0);
	i = 0;
	x = malloc((sizeof(char) * len) + 1);
	if (x == NULL)
		return (NULL);
	while (src[i])
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*vector;
	char	*aux;
	size_t	i;

	if (!s)
		return (NULL);
	aux = (char *)s;
	if (start >= (unsigned int)ft_strlen(aux, 0))
		return (ft_strdup(""));
	aux += start;
	if (len > (unsigned int)ft_strlen(aux, 0))
		len = ft_strlen(aux, 0);
	vector = (char *)malloc(sizeof(char) * (len + 1));
	if (!vector)
		return (NULL);
	i = 0;
	while (i < len)
	{
		vector[i] = *aux;
		aux++;
		i++;
	}
	vector[i] = '\0';
	return (vector);
}

size_t	ft_strlen(char const *str, unsigned char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i] != 0)
		i++;
	return (i);
}
