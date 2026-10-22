/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:45:17 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/20 15:27:36 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

ssize_t	ft_putnbr(ssize_t nb, int counter, int fd);
size_t	ft_sputnbr(size_t nb, int counter, int fd);
size_t	ft_strlen(const char *s);

int ft_printf(const char *text, ...);
int	ft_hexadecimals(unsigned int number, char is_uppercase);
int	ft_print_memory(void *addr);

#endif