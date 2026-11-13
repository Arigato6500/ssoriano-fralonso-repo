/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:14:50 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/02 11:28:21 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*x;

	if (!src)
		return (NULL);
	len = 0;
	i = 0;
	while (src[len])
		len++;
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

// int main(void)
// {
// 	char	*original = "Holxddda";
// 	char	*cpy = strdup(original);
// 	char	*copia = ft_strdup(original);

// 	printf("%s\n", copia);
// 	printf("%s\n", cpy);
// }
