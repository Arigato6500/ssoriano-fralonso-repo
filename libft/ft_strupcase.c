/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 09:35:02 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/28 11:31:46 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] >= 'a' && str[o] <= 'z')
			str[o] -= 32;
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
	char test4[] = "N2345IE";
	char test5[] = "mand";
	char test6[] = "florian";

	char *tests[] = {test1, test2, test3, test4, test5, test6, NULL};
	int i = 0;
	while (tests[i] != NULL)
    {
        printf("ft_strupcase(\"%s\") = \"%s\"\n",
               tests[i], ft_strupcase(tests[i]));
        i++;
    }

    return (0);
}
*/