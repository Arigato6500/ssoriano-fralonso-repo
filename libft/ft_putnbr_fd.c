/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:08:16 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 11:39:46 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*cnbr;
	int		i;

	i = 0;
	cnbr = ft_itoa(n);
	while (cnbr[i])
	{
		write(fd, &cnbr[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	ft_putstr_fd("ABCD", 1);
// }