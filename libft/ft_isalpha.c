/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:29:04 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 13:23:35 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}

/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char *tests[] = {
        "Hola",
        "HelloWorld",
        "abcXYZ",
        "abc123",
        "123",
        "Hola!",
        "",
        "aBcDeF",
        " ",
        "Test42",
        NULL
    };

    int i = 0;

    while (tests[i] != NULL)
    {
        printf("ft_str_is_alpha(\"%s\") = %d\n",
               tests[i], ft_str_is_alpha(tests[i]));
        i++;
    }

    return (0);
}
*/