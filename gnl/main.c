/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:43:32 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/22 15:57:16 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	int		file;
	int		file1;
	int		file2;
	int		i;
	char	*string;

	if (argc <= 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc == 2)
	{
		file = open(argv[1], O_RDONLY);
		string = "";
		i = 0;
		while (i < 10)
		{
			string = get_next_line(file);
			printf("%s.\n", string);
			free(string);
			i++;
		}
		free(string);
	}
	if (argc == 4)
	{
		file = open(argv[1], O_RDONLY);
		file1 = open(argv[2], O_RDONLY);
		file2 = open(argv[3], O_RDONLY);
		string = "";
		i = 0;
		while (string)
		{
			string = get_next_line(file);
			printf("%s.\n", string);
			free(string);
			string = get_next_line(file1);
			printf("%s.\n", string);
			free(string);
			string = get_next_line(file2);
			printf("%s.\n", string);
			free(string);
		}
	}
	else if (argc > 5)
	{
		
		write(2, "Too many arguments.\n", 21);
		return (0);
	}
	printf("GG's");
	return (0);
}
