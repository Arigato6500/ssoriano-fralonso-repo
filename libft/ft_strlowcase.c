/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 10:35:47 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:31:45 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] >= 'A' && str[o] <= 'Z')
			str[o] += 32;
		o++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char test1[] = "9984984";
	char test2[] = "9aa41aaa";
	char test3[] = "";
	char test4[] = "NIE";
	char test5[] = "mand";
	char test6[] = "FLORIAAAAAAN";

	char *tests[] = {test1, test2, test3, test4, test5, test6, NULL};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_strupcase(\"%s\") = \"%s\"\n",
               tests[i], ft_strlowcase(tests[i]));
        i++;
    }

    return (0);
}
*/