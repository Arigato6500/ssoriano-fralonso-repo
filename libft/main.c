/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:55:48 by ssoriano          #+#    #+#             */
/*   Updated: 2026/10/03 18:12:44 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// // ATOI
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("a1"));
// 	printf("%d\n", atoi("++1"));
// 	printf("%d\n", ft_atoi("+42lyon"));
// 	printf("%d\n", atoi("+101"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", atoi("-2147483648"));
// 	printf("%d\n", atoi("2147483647"));
// 	printf("%d\n", ft_atoi("42"));
// 	printf("%d\n", atoi("+-42"));
// }

// BZERO
// int main(void)
// {
// 	char	lista[] = "ABCDE";
// 	char	lista2[] = "ABCDE";

// 	ft_bzero(lista + 2, 4);
// 	bzero(lista2 + 2, 4);
// 	printf("La lista: %s.\n", lista);
// 	printf("La lista2: %s.\n", lista2);
// }

// //CALCOC
// int main(void)
// {
// 	int	num = 5;
// 	int	i = 0;
// 	int	*nums = ft_calloc(num, sizeof(int));
// 	int	*nms = calloc(num, sizeof(int));
// 	while (i < num)
// 	{
// 		printf("nums: %d\n", nums[i]);
// 		printf("nms: %d\n", nms[i]);
// 		i++;
// 	}	
// }

// //ITOA
// int main(void)
// {
// 	int	inbr = -+279852632;
// 	char *anbr = ft_itoa(inbr);
	
// 	printf("Assci nbr: (%s).\n", anbr);
// }

// // FT_LSTADD_BACK
// int main(void)
// {
// 	t_list	*lst = ft_lstnew("hola carlos");
// 	t_list	*new = ft_lstnew("fa");
// 	printf("lst: {%s}", (char *)lst->content);
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstlast(lst);
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// 	lst = lst->next;
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// 	new = ft_lstnew("RE");
// 	ft_lstadd_back(&lst, new);
// 	lst = lst->next;
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// 	new = ft_lstnew("RA");
// 	ft_lstadd_back(&lst, new);
// 	lst = lst->next;
// 	printf("lst first: {%s}.\n", (char *)lst->content);
// }

// FT_LSTADD_FRONT
// int main(void)
// {
// 	t_list *lst = ft_lstnew("Carlos");
// 	t_list *new = ft_lstnew("Hola");
// 	printf("lst: {%s}", (char *)lst->content);
// 	ft_lstadd_front(&lst, new);
// 	printf("lst new: {%s}", (char *)lst->content);
// 	printf("lst new: {%s}", (char *)lst->next);
// }

// // FT_LSTCLEAR
// static void	ft_deletall(void *deleted)
// {
// 	if (ft_strncmp("hola", deleted, 3) == 0)
// 		free(deleted);
// }
// int	main(void)
// {
// 	t_list			*lst = ft_lstnew("hola carlos");
// 	t_list			*new = ft_lstnew("dame a tu prima en fa");

// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("hola Es para un concurso");
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew(">:(");
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("hola linda persona");
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("adios linda persona");
// 	ft_lstadd_back(&lst, new);
	
// 	printf("list size before clear: {%d}.\n",  ft_lstsize(lst));
	
// 	ft_lstclear(&lst, &ft_deletall);

// 	printf("lst size after clear: {%d}.\n", ft_lstsize(lst));
// }

//FT_LSTDELONE & FT_LSTSIZE
// static void	ft_deletall(void *deleted)
// {
// 	free(deleted);
// }

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew("hola carlos");
// 	t_list	*new = ft_lstnew("dame a tu prima en fa");
// 	t_list	*aux;
// 	unsigned int	i;

// 	i = 0;
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("Es para un concurso");
// 	ft_lstadd_back(&lst, new);
// 	aux = lst;

// 	while (aux != NULL)
// 	{
// 		printf("lst before: (%s).\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	printf("lst size before del one: (%d).\n", ft_lstsize(lst));
// 	ft_lstdelone(lst->next, &ft_deletall);
// 	lst->next = new;
// 	printf("lst size after del one: (%d).\n", ft_lstsize(lst));
// 	while (lst != NULL)
// 	{
// 		printf("lst after: (%s).\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }

// //FT_LSTITER
// void ft_ihave_down(void *s)
// {
// 	int		i;
// 	char	*st;

// 	st = s;
// 	i = 0;
// 	while (st[i])
// 	{
// 		if (((st[i] >= 'a' && st[i] <= 'z')
// 				|| (st[i] >= 'A' && st[i] <= 'Z')))
// 			st[i] -= 32;
// 		i++;
// 	}
// }
// int	main(void)
// {
// 	t_list	*lst = ft_lstnew(ft_strdup("hola carlos "));
// 	t_list	*new = ft_lstnew(ft_strdup("dame a tu prima en fa "));
// 	t_list	*aux;
	
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew(ft_strdup("Es para un concurso "));
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew(ft_strdup("Es para un concurso "));
// 	ft_lstadd_front(&lst, new);
// 	ft_lstiter(lst->next, &ft_ihave_down);
// 	aux = lst;
// 	while (aux != NULL)
// 	{
// 		printf("aux after: (%s).\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	return (0);
// }

// // FT_LSTMAP
// static void	*ft_altchr(void *s)
// {
// 	int		i;
// 	char	*st;

// 	st = s;
// 	i = 0;
// 	while (st[i])
// 	{
// 		if (((st[i] >= 'a' && st[i] <= 'z')
// 				|| (st[i] >= 'A' && st[i] <= 'Z')))
// 			st[i] -= 32;
// 		i++;
// 	}
// 	return (s);
// }

// static void	ft_deletif(void *deleted)
// {
// 	int		i;
// 	char	*st;

// 	st = deleted;
// 	i = 0;
// 	if (((st[i] >= 'a' && st[i] <= 'z') 
// 			|| (st[i] >= 'A' && st[i] <= 'Z')))
// 		free(deleted);
// }

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew(ft_strdup("qwert"));
// 	t_list	*new = ft_lstnew(ft_strdup("yuiop"));
// 	t_list	*aux;

// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew(ft_strdup("asdfg"));
// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew(ft_strdup(">:(__"));
// 	ft_lstadd_front(&lst, new);

// 	aux = ft_lstmap(lst, &ft_altchr, &ft_deletif);
// 	while (aux != NULL)
// 	{
// 		printf("lst after: {%s}.\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// }

//FT_MEMCHR
// int main(void)
// {
// 	char	str[] = "";
// 	char	str2[] = "";
	
// 	char *acter = ft_memchr(str, 'o', sizeof(str));
// 	printf("Caracter: %s...", acter);
// 	char *macter = memchr(str2, 'o', sizeof(str));
// 	printf("Caracter: %s...", macter);
// }

// // FT_MEMCMP
// #include <stdio.h>
// int main(void)
// {
// 	char	s1[] = "Hola";
// 	char	s2[] = "Holf";
// 	int		i;

// 	i = ft_memcmp(s1, s2, 4);
// 	printf("Resultado: %d...\n", i);
// }

// // FT_MEMCPY
// int	main(void)
// {
// 	char	*str = "Hallo du bist sehr schön!!";
// 	char	copy[30];
// 	ft_memcpy(copy, str, 5);
// 	printf("The copy: %s.\n", copy);
// }

// // FT_MEMMOVE
// int	main(void)
// {
// 	char		dest[5];
// 	char		src[] = "Hallooooo";
// 	char		des2[5];
// 	char		src2[] = "HaoOOOOOOO";
// 	char		des3[5];
// 	char		src3[] = "Hal";
// 	ft_memmove(dest, src, 4);
// 	memmove(des2, src2, 4);
// 	ft_memmove(des3, src3, 4);

// 	printf("Fuente = %s...\n", src);
// 	printf("Destin = %s...\n", dest);
// 	printf("Fuente2 = %s...\n", src2);
// 	printf("Destin2 = %s...\n", des2);
// 	printf("Fuente3 = %s...\n", src3);
// 	printf("Destin3 = %s...\n", des3);
// }

// //FT_MEMSET
// int main(void)
// {
// 	char	lista[] = "0123456789";
// 	int		ls[10];
// 	int		lst[10];
// 	int		replz;

// 	replz = 42;
// 	ft_memset(lista, replz, 9);
// 	ft_memset(ls, replz, 9);
// 	ft_memset(lst, replz, 9);
// 	printf("La lista: %s.\n", (char *)lista);
// 	printf("La lista: %s.\n", (char *)ls);
// 	printf("La lista: %s.\n", (char *)lst);
// }

// //FT_PUTX_FD
// int main(void)
// {
// 	ft_putstr_fd("ABCD\n", 1);
// 	ft_putchar_fd('A', 1);
// 	ft_putendl_fd("\nHola uwu", 1);
// 	ft_putstr_fd("ABCD\n", 1);
// }

// //FT_SPLIT
int	main(void)
{
	char	*s = "   dwefw   a isjvn lknvd      a dk";
	char	c = '\0';
	char	**matriz = ft_split(s, c);
	int		i = 0;
	if (matriz == NULL)
	{
		printf("But nobody came...\n");
		return (0);
	}
	while (matriz[i])
	{
		printf("matriz[%d] = (%s)\n", i, matriz[i]);
		i++;
	}
}

// // FTF_STRCHR
// int main(void)
// {
// 	char 	str[] = "Hola xd";
// 	//char	s[] = "Miau";
// 	char	*acter = ft_strchr(str, 'o');
// 	char	*car = strchr(str, 'o');
// 	printf("Caracter: %s...\n", acter);
// 	printf("Caracter: %s...\n", car);
// }

// //FT_STRDUP
// int main(void)
// {
// 	char	*original = "Holxddda";
// 	char	*cpy = strdup(original);
// 	char	*copia = ft_strdup(original);

// 	printf("%s\n", copia);
// 	printf("%s\n", cpy);
// }

// // FT_STRITERI
// static void	ft_strupp(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }
// int main(void)
// {
// 	char	str[] = "Halt! dieser ist ein striteri string";
// 	ft_striteri(str, &ft_strupp);
// 	printf("striteri: (%s).\n", str);
// 	return (0);
// }

// // FT_STRJOIN
// int main(void)
// {
// 	char	*con = ft_strjoin("", "");
// 	printf("%s\n", con);
// }

// // FT_STRMAPI
// static char ft_chachar(unsigned int i, char c)
// {
// 	c += i;
// 	return (c); 
// }
// static char	ft_rahcahc(unsigned int i, char c)
// {
// 	c -= i;
// 	return (c); 
// }
// int main(void)
// {
// 	char *res = ft_strmapi("AAAA", &ft_chachar);
// 	printf("Resultado: (%s).\n", res);
// 	char *pez = ft_strmapi("DDDD", &ft_rahcahc);
// 	printf("Resultado: (%s).\n", pez);
// }

// // FT_STRRCHR
// int main(void)
// {
// 	char 	str[] = "A B C A B C A BCD";
// 	char	s[] = "Miau";
// 	char	*acter = ft_strchr(str, 'X');
// 	char	*car = strchr(s, 'L');
// 	printf("Caracter: %s...\n", acter);
// 	printf("Caracter: %s...\n", car);
// }

// // FT_STRNSTR
// int	main(void)
// {
// 	char a[] = "";
// 	char b[] = "";
// 	printf("needle = %s\n", ft_strnstr(a, b, 0));
// }

// // FT_STRTRIM
// int	main(void)
// {
// 	char *s1 = "AAALK";
// 	s1 = ft_strtrim("abcd", "abcd");
// 	printf("s1: (%s)\n", s1);
// 	return (0);
// }

// // STR_STRRCHR
// int main(void)
// {
// 	char 	str[] = "t";
// 	char	*acter = ft_strrchr(str, 't');
// 	char	*car = strrchr(str, 't' + 256);
// 	printf("Caracter: %s...\n", acter);
// 	printf("Caracter: %s...\n", car);
// }

// //ft_strncmp
// int main(void)
// {
// 	printf("%d\n", ft_strncmp("t","", 0));
// 	printf("%d\n", ft_strncmp("1234","1235", 3));
// 	return (0);
// }

// // FT_SUBSTR
// int main(void)
// {
// 	char *cadena = "Hallo, wie bist du? ich bin gut danke";
// 	char *subcadena = ft_substr(cadena, 5, ft_strlen(cadena) + 125);
// 	int i = 0;
// 	printf("ptr[%d]:(%s)\n", i, subcadena);
// 	i++;
// }