/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:13:57 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/20 19:25:45 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

void	*ft_leftovers_managment(char **leftovers, char *actual_line)
{
	char	*copycat;

	if (!actual_line || actual_line[0] == '\0')
	{
		free(actual_line);
		free(*leftovers);
		return (*leftovers = NULL, NULL);
	}
	if (ft_strchr(*leftovers, '\n'))
	{
		copycat = ft_strdup(ft_strchr(*leftovers, '\n') + 1);
		free(*leftovers);
		*leftovers = ft_strdup(copycat);
		free(copycat);
		return (*leftovers);
	}
	else
	{
		free(*leftovers);
		*leftovers = NULL;
	}
	return (actual_line);
}

char	*ft_line_reader(int fd, char **leftovers, char *lines)
{
	int		i_readed;
	char	*aux;

	if (!lines)
		return (NULL);
	i_readed = 1;
	while (i_readed > 0 && !ft_strchr(*leftovers, '\n'))
	{
		i_readed = read(fd, lines, BUFFER_SIZE);
		if (i_readed < 0)
			return (free(lines), NULL);
		lines[i_readed] = '\0';
		aux = ft_strjoin(*leftovers, lines);
		if (!aux)
			return (free(lines), NULL);
		free(*leftovers);
		*leftovers = ft_strjoin(*leftovers, lines);
	}
	return (free(lines),
		ft_substr(*leftovers, 0, ft_strlen(*leftovers, '\n') + 1));
}

char	*get_next_line(int fd)
{
	static char	*leftovers[1024];
	char		*actual_line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!leftovers[fd])
	{
		leftovers[fd] = ft_strdup("");
		if (!leftovers[fd])
			return (NULL);
	}
	actual_line = ft_line_reader(fd, &leftovers[fd],
			malloc(BUFFER_SIZE * sizeof(char) + 1));
	if (!ft_leftovers_managment(&leftovers[fd], actual_line))
		return (NULL);
	return (actual_line);
}
