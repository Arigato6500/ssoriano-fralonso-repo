/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:05:18 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:41:48 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_putnbr(int nb, char *itoa, int i)
{
	if (nb > 9)
		ft_putnbr(nb / 10, itoa, i - 1);
	itoa[i] = (nb % 10) + '0';
	return (itoa);
}

char	*ft_itoa(int n)
{
	long	count;
	long	nbr;
	char	*itoa;
	long	i;

	nbr = (long)n;
	i = 0;
	count = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr / count >= 10)
	{
		count *= 10;
		i++;
	}
	itoa = ft_calloc((i + 1), sizeof(char));
	if (!itoa[0])
		itoa[0] = '-';
	ft_putnbr(nbr, itoa, i);
	return (itoa);
}

// int main(void)
// {
// 	int	inbr = -54513064;
// 	char *anbr = ft_itoa(inbr);
// 	printf("Assci nbr: (%s).\n", anbr);
// }