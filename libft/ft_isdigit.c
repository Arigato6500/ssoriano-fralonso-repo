/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 18:13:43 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:52:15 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	return ((c >= '0' && c <= '9'));
}

// #include <unistd.h>
// #include <stdio.h>

// int main(void)
// {
// 	char		*tests[] = {
// 		"9984984",
// 		"9aa41aaa",
// 		"",
// 		NULL
// 	};
// 	int i = 0;
// 	while (tests[i] != NULL)
//     {
//         printf("ft_str_is_alpha(\"%s\") = %d\n",
//                tests[i], ft_str_is_numeric(tests[i]));
//         i++;
//     }

//     return (0);
// }
