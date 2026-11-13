/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:15:58 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:42:35 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char ft_chachar(unsigned int i, char c)
// {
// 	c += i;
// 	return (c); 
// }
// static char	ft_rahcahc(unsigned int i, char c)
// {
// 	c -= i;
// 	return (c); 
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*aux;
	unsigned int	i;

	if (!s || !f)
		return (0);
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	aux = str;
	while (s[i])
	{
		*aux++ = f(i, s[i]);
		i++;
	}
	*aux = '\0';
	return (str);
}

// int main(void)
// {
// 	char *res = ft_strmapi("AAAA", &ft_chachar);
// 	printf("Resultado: (%s).\n", res);
// 	char *pez = ft_strmapi("DDDD", &ft_rahcahc);
// 	printf("Resultado: (%s).\n", pez);
// }