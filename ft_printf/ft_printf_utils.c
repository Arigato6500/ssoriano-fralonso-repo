/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:44:20 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/26 18:42:56 by ssoriano         ###   ########.fr       */
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

int	ft_sdecimal(int nb, int fd)
{
	long int	i;
	char		c;
	int			a;

	a = 0;
	i = (long int)nb;
	if (i < 0)
	{
		a++;
		i *= -1;
		write(fd, "-", 1);
	}
	if (i >= 10)
		a += ft_sdecimal(i / 10, fd);
	c = (i % 10) + '0';
	write(fd, &c, 1);
	a++;
	return (a);
}

int	ft_udecimal(int nb, int fd)
{
	unsigned long	i;
	char			c;
	int				a;

	a = 0;
	i = (long int)nb;
	if (i >= 10)
		a += ft_udecimal(i / 10, fd);
	c = (i % 10) + '0';
	write(fd, &c, 1);
	a++;
	return (a);
}

int	ft_hexadecimals(unsigned int number, char is_uppercase)
{
	unsigned long long n;
	char	*hexadecimal;
	int		a;

	if (is_uppercase == 'X')
		hexadecimal = "0123456789ABCDEF";
	else
		hexadecimal = "0123456789abcdef";
	a = 0;
	n = (unsigned long long)number;
	if (n > 15)
	{
		a += ft_hexadecimals(n / 16, is_uppercase);
		if (a == -1)
			return (-1);
	}
	if (write(1, &hexadecimal[n % 16], 1) == -1)
		return (-1);
	a++;
	return (a);
}

int	ft_print_memory(void *addr)
{
	unsigned long	i;
	size_t			flag;
	int				num;

	i = (sizeof(unsigned long) * 2);
	flag = 0;
	if (!addr)
		return (write(1, "(nil)", 5), 5);
	write(1, "0x", 2);
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
