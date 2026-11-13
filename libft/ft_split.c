/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:05:29 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 16:31:05 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **matrix, int qwrds)
{
	int	i;

	if (!matrix)
	{
		return (NULL);
	}
	i = 0;
	while (i < qwrds)
	{
		free(matrix[i]);
		i++;
	}
	free (matrix);
	return (NULL);
}

static int	ft_lenght_word(char const *s, char charset)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == charset)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_quantity_words(char const *haystack, char needle, int o)
{
	int	i;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle)
		{
			while (haystack[i] == needle && haystack[i])
				i++;
		}
		o++;
		while (haystack[i] != needle && haystack[i])
			i++;
	}
	return (o);
}

static char	*ft_set_word(char const *haystack, int lwrd)
{
	int		i;
	char	*vector;

	i = 0;
	vector = (char *)malloc(sizeof(char) * (lwrd));
	if (!vector)
		return (NULL);
	while (i < lwrd)
	{
		vector[i] = haystack[i];
		i++;
	}
	vector[i] = '\0';
	return (vector);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		lwrd;
	int		qwrds;
	int		k;

	if (!s)
		return (NULL);
	qwrds = ft_quantity_words(s, c, 1);
	matrix = (char **)malloc(sizeof(char *) * (qwrds));
	k = 0;
	while (k < qwrds - 1)
	{
		while (*s == c)
			s++;
		lwrd = ft_lenght_word(s, c);
		if (!lwrd)
			return (ft_free(matrix, qwrds));
		matrix[k] = ft_set_word(s, lwrd);
		s += lwrd;
		k++;
	}
	matrix[k] = NULL;
	return (matrix);
}
