/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:18:21 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/20 15:28:03 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	// |----------| FLAG %p |----------|
	char lista = 'S';
	ft_printf("lol %p\n", &lista);
	printf("lol %p\n", &lista);

	return (0);
	// |----------| FLAG %% |----------|
	ft_printf("lol %%\n");
	printf("lol %%\n");

	// |----------| FLAG %c |----------|
	ft_printf("lol %c\n", 'c');
	printf("lol %c\n", 'c');

	// |----------| FLAG %s |----------|
	ft_printf("lol %s\n", "Chan-martin");
	printf("lol %s\n", "Chan-martin");

	// |----------| FLAG %d |----------|
	ft_printf("lol %d\n", -654645);
	printf("lol %d\n", -654645);

	// |----------| FLAG %i |----------|
	ft_printf("lol %i\n", -24845165);
	printf("lol %i\n", -24845165);

	// |----------| FLAG %u |----------|
	ft_printf("lol %u\n", 16165154);
	printf("lol %u\n", 16165154);

	// |----------| FLAG %x |----------|
	ft_printf("lol %x\n", 9112007);
	printf("lol %x\n", 9112007);

	// |----------| FLAG %X |----------|
	ft_printf("lol %s\n", 9112007);
	printf("lol %s\n", 9112007);
	return (0);
}
