/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:41:01 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/20 15:19:25 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// • va_list: Tipo de dato utilizado para declarar la variable que almacenará 
// el estado y la posición de los argumentos opcionales.
// • va_start(ap, last_arg): Inicializa la variable va_list (por ejemplo, ap). 
// El segundo parámetro debe ser el nombre del último parámetro fijo (no variadico) 
// que recibe la función.
// • va_arg(ap, type): Recupera el siguiente argumento de la lista asumiendo que es 
// del tipo especificado (type) y desplaza el puntero interno.
// • va_copy(dest, src): Realiza una copia de un estado actual de va_list.
// • va_end(ap): Finaliza y limpia el uso de la lista de argumentos antes de que 
// la función retorne

int	ft_intputchar_fd(unsigned int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	return (ft_strlen(s));
}

static unsigned int	ft_conversions(const char text, va_list arg)
{
	if (text == 'c')
		return (ft_intputchar_fd(va_arg(arg, unsigned int), 1));
	else if (text == 's')
		return (ft_putstr_fd(va_arg(arg, char *), 1));
	if (text == 'p')
		return (ft_print_memory(va_arg(arg, void *)));
	else if (text == 'd')
		return (ft_putnbr(va_arg(arg, ssize_t), 0, 1));
	else if (text == 'i')
		return (ft_putnbr(va_arg(arg, ssize_t), 0, 1));
	else if (text == 'u')
		return (ft_sputnbr(va_arg(arg, size_t), 0, 1));
	else if (text == 'X' || text == 'x')
		return (ft_hexadecimals(va_arg(arg, unsigned long), text));
	else if (text == '%')
		return (ft_intputchar_fd(text, 1));
	return (-1);
	
}
int ft_printf(const char *text, ...)
{
	va_list args;
	int	i;
	
	i = 0;
	va_start(args, text);
	while (text[i])
	{
		if (text[i] == '%')
		{
			ft_conversions(text[i + 1], args);
			i += 2;
		}
		ft_intputchar_fd(text[i], 1);
		i++;
	}
	return (i);
}
