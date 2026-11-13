/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 10:08:50 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/01 11:27:23 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}

// int main(void)
// {
// 	int	num = 5;
// 	int	i = 0;
// 	int	*nums = ft_calloc(num, sizeof(int));
// 	int	*nms = calloc(num, sizeof(int));
// 	while (i < num)
// 	{
// 		printf("nums: %d\n", nums[i]);
// 		printf("nms: %d\n", nms[i]);
// 		i++;
// 	}	
// }