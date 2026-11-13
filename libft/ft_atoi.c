/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:53:04 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 14:50:28 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	ptm;
	long int	val;

	ptm = 1;
	val = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			ptm *= -1;
			
		}
		i++;
	}
	while ((str[i] <= '9' && str[i] >= '0'))
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (val * ptm);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("-+-+5"));
// 	printf("%d\n", atoi("-+-+5"));
// }
