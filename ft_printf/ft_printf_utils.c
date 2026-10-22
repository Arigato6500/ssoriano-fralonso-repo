/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:44:20 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/20 15:26:13 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

ssize_t	ft_putnbr(ssize_t nb, int counter, int fd)
{
	int		i;
	char	cnb;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, counter++, fd);
	cnb = (nb % 10) - '0';
	write(fd, &cnb, 1);
	return (counter);
}

size_t	ft_sputnbr(size_t nb, int counter, int fd)
{
	int		i;
	char	cnb;

	i = 0;
	if (nb >= 10)
		ft_putnbr(nb / 10, counter++, fd);
	cnb = (nb % 10) - '0';
	write(fd, &cnb, 1);
	return (counter);
}

int	ft_hexadecimals(unsigned long number, char is_uppercase)
{
	char	*hexadecimal;
	int 	aux;
	int		len;

	len = 0;
	if (is_uppercase == 'X')
		hexadecimal = "0123456789ABCDEF";
	else 
		hexadecimal = "0123456789abcdef";
	if (number > 15)
	{
		aux = ft_hexadecimals(number / 16, is_uppercase);
		if (aux == -1)
			return (-1);
		len += aux;
	}
	if (write(1, &hexadecimal[number % 16], 1) == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_print_memory(void *addr)
{
	unsigned long	i;
	int				flag;
	int				num;

	i = (sizeof(unsigned long) * 2);
	write(1, "0x", 2);
	flag = 0;
	while (i-- > 0)
	{
		num = (((unsigned long)addr >> (i * 4)) & 0xF);
		if (flag)
		{
			ft_hexadecimals(num, 'x');
			flag += 1;
		}
		else if (num && !flag)
		{
			ft_hexadecimals(num, 'x');
			flag += 1;
		}
	}
	return (2 + flag);
}
