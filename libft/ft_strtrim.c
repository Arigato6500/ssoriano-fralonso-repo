/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:06:19 by ssoriano          #+#    #+#             */
/*   Updated: 2026/09/28 17:44:41 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_mlen(char const *str, char const *set, int start, int end)
{
	int	j;
	
	j = 0;
	while (j != ft_strlen((char *)set))
	{
		j = 0;
		printf("str[start]: (%c).\n", str[start]);
		while (str[start] != set[j] && set[j])
		{
			printf("No");
			j++;
		}
		start++;
	}
	j = 0;
	while (j != ft_strlen((char *)set))
	{
		j = 0;
		end--;
		while (str[end] != set[j] && set[j])
		{
			printf("No");
			j++;
		}
		
	}
}

char *ft_strtrim(char const *str, char const *set)
{
	char 			*triming;
	unsigned int	range;
	unsigned int	start;
	unsigned int	end;

	if (!str || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)str);
	ft_mlen(str, set, start, end);
	range = end - start;
	triming = (char *)ft_calloc(range, sizeof(char));
	str += start;
	while (!triming[range])
	{
		*triming = *str;
		triming++;
		str++;
	}
	return (triming);
}

// int main(void)
// {
// 	char *str = "ABABAB...ABAB....ABABABA";
// 	char *set = "BA";

// 	char *trimed = ft_strtrim(str, set);
// 	printf("Trimed: (%s).\n", trimed);
// }