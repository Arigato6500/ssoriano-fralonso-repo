/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:58:51 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 16:06:28 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_checks(char const *s, unsigned int start, size_t len)
// {
	
// }
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*vector;
	char	*aux;
	size_t	i;

	if (!s)
		return (NULL);
	aux = (char *)s;
	if (start >= (unsigned int)ft_strlen(aux))
	{
		vector = malloc(1 * sizeof(char));
		*vector = '\0';
		return (vector);
	}
	aux += start;
	if (len > (unsigned int)ft_strlen(aux))
		len = ft_strlen(aux);
	vector = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		vector[i] = *aux;
		aux++;
		i++;
	}
	vector[i] = '\0';
	return (vector);
}

// int main(void)
// {
// 	char *cadena = "Hallo, wie bist du? Ich bin gut, danke, für fragen";
// 	char *subcadena = ft_substr(cadena, 10, 20);
// 	int i = 0;
// 		printf("ptr[%d]:(%s)\n", i, subcadena);
// 		i++;
// }