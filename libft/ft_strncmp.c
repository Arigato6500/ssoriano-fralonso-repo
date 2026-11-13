/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:09:36 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 13:37:43 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] == s2[i]) && s1[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*

int main(void)
{
	printf("%d\n", ft_strncmp("A","A", 0));
	printf("%d\n", ft_strncmp("Hal","Hallo", 2));
}
*/