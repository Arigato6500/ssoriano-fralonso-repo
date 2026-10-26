/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:18:21 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/26 18:46:24 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	// size_t ftval = 0;
    // size_t prval = 0;
    // char *lista = NULL;

	ft_printf("");
	// // |----------| FLAG %p |----------|
	// ftval = ft_printf("%p\n", "Nigga");
	// prval = printf("%p\n", "Nigga");
	// printf("ft_printf flag p: %zu | printf flag p: %zu\n\n", ftval, prval);

	// ftval = ft_printf("%p\n", (char *)NULL);
	// prval = printf("%p\n", (char *)NULL);
	// printf("ft_printf flag p, NULL: %zu | printf flag p, NULL: %zu\n\n", ftval, prval);


	// // |----------| FLAG %% |----------|
	// ftval = ft_printf("\n%%\n");
	// prval = printf("\n%%\n");
	// printf("\nft_printf flag %%: %zu | printf flag %%: %zu\n\n", ftval, prval);

	// ftval = ft_printf("\n%%%%%%\n");
	// prval = printf("\n%%%%%%\n");
	// printf("\nft_printf flag %%: %zu | printf flag %%: %zu\n\n", ftval, prval);

	// // |----------| FLAG %c |----------|
	// ftval = ft_printf("%c", 'a');
	// prval = printf("%c", 'c');
	// printf("\nft_printf flag c: %zu | printf flag c: %zu\n\n", ftval, prval);

	// ftval = ft_printf("\n%c%c%c\n", 'a', '\t', 'b');
	// prval = ft_printf("\n%c%c%c\n", 'a', '\t', 'b');
	// printf("\nft_printf flag c: %zu | printf flag c: %zu\n\n", ftval, prval);

	// // |----------| FLAG %s |----------|
	// ftval = ft_printf("\n%s\n", "Chan-martin\n");
	// prval = printf("\n%s\n", "Chan-martin\n");
	// printf("ft_printf flag s: %zu | printf flag s: %zu\n\n", ftval, prval);
	// ftval = ft_printf("\n%s\n", lista);
	// prval = printf("\n%s\n", lista);
	// printf("ft_printf flag s (NULL): %zu | printf flag s (NULL): %zu\n\n", ftval, prval);

	// // |----------| FLAG %d decimal |----------|
	// ftval = ft_printf("%d\n", 696969);
	// prval = printf("%d\n", 696969);
	// printf("ft_printf flag d: %zu | printf flag d: %zu\n\n", ftval, prval);
		
	// ftval = ft_printf("%d\n", -248451656);
	// prval = printf("%d\n", -248451656);
	// printf("ft_printf flag d: %zu | printf flag d: %zu\n\n", ftval, prval);

	// // |----------| FLAG %i integrales |----------|
	// ftval = ft_printf("%i\n", -2484516);
	// prval = printf("%i\n", -2484516);
	// printf("ft_printf flag i: %zu | printf flag i: %zu\n\n", ftval, prval);

	// // |----------| FLAG %u sin signo |----------|
	// ftval = ft_printf("%u\n", 16165154);
	// prval = printf("%u\n", 16165154);
	// printf("ft_printf flag u: %zu | printf flag u: %zu\n\n", ftval, prval);
		

// 	// |----------| FLAG %x / %X hexadecimal |----------|
// 	ftval = ft_printf("\n %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, 
// ULONG_MAX, 0, -42);
// 	prval = printf("\n %x %x %lx %lx %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, 
// ULONG_MAX, 0, -42);
// 	printf("\nft_printf flag x: %zu\nprintf flag x: %zu\n", ftval, prval);

// 	ftval = ft_printf("\n %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, 
// ULONG_MAX, 0, -42);
// 	prval = printf("\n %X %X %lX %lX %lX %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, 
// ULONG_MAX, 0, -42);
// 	printf("\nft_printf flag X: %zu\nprintf flag X: %zu\n", ftval, prval);

	return (0);
}
