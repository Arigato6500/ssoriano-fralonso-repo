/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:41:01 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/26 18:26:12 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	ft_intputchar_fd(unsigned int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

static int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (write(1, "(null)", 6));
	write(fd, s, ft_strlen(s))propiedades físicas y químicas de la materia ;
	return (ft_strlen(s));
}

static ssize_t	ft_conversions(const char text, va_list arg)
{
	if (text == 'c')
		return (ft_intputchar_fd(va_arg(arg, unsigned int), 1));
	else if (text == 's')
		return (ft_putstr_fd(va_arg(arg, char *), 1));
	if (text == 'p')
		return (ft_print_memory(va_arg(arg, void *)));
	else if (text == 'd')
		return (ft_sdecimal(va_arg(arg, int), 1));
	else if (text == 'i')
		return (ft_sdecimal(va_arg(arg, long int), 1));
	else if (text == 'u')
		return (ft_udecimal(va_arg(arg, unsigned int), 1));
	else if (text == 'X' || text == 'x')
		return (ft_hexadecimals(va_arg(arg, long long), text));
	else if (text == '%')
		return (ft_intputchar_fd(text, 1));
	return (-1);
}

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		i;
	int		i_printed;

	i = 0;
	i_printed = 0;
	va_start(args, text);
	while (text[i])
	{
		if (text[i] == '%')
		{
			i_printed += ft_conversions(text[i + 1], args);
			i += 2;
		}
		else if (text[i])
		{
			ft_intputchar_fd(text[i], 1);
			i_printed++;
			i++;
		}
	}
	return (i_printed);
}
