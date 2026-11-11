/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:45:17 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/26 18:23:32 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

size_t	ft_strlen(const char *s);

int		ft_hexadecimals(unsigned int number, char is_uppercase);
int		ft_print_memory(void *addr);
int		ft_sdecimal(int nb, int fd);
int		ft_udecimal(unsigned int nb, int fd);
int		ft_printf(const char *text, ...);

#endif