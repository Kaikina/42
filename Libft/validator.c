/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgirou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:59:16 by tgirou            #+#    #+#             */
/*   Updated: 2016/11/11 13:01:32 by tgirou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void		success(int	nbr)
{
	printf("TEST %d : OK !\n", nbr);
}

void		fail(int nbr)
{
	printf("TEST %d : KO !\n", nbr);
}

void	memsetvalidator(void)
{
	char	str[50];
	char	strbis[50];
	int		test;

	printf("TEST FT_MEMSET.C\n");
	test = 1;
	strcpy(str, "This is my test.");
	strcpy(strbis, "This is my test.");
	ft_memset(str, '$', 7);
	memset(strbis, '$', 7);
	if (strcmp(str, strbis) == 0)
		success(test++);
	else
		fail(test++);
}

void	bzerovalidator(void)
{
	char	str[50];
	char	strbis[50];
	int		test;

	printf("\nTEST FT_BZERO.C\n");
	test = 1;
	strcpy(str, "This is my test.");
	strcpy(strbis, "This is my test.");
	ft_bzero(str, 7);
	bzero(strbis, 7);
	if (strcmp(str, strbis) == 0)
		success(test++);
	else
		fail(test++);
}

void	memcpyvalidator(void)
{
	char	*src;
	char	dest[50];
	char 	destbis[50];
	int		test;

	src = "This is my test.";
	printf("\nTEST FT_MEMCPY.C\n");
	test = 1;
	memcpy(dest, src, strlen(src + 1));
	ft_memcpy(destbis, src, strlen(src + 1));
	if (strcmp(dest, destbis) == 0)
		success(test++);
	else
		fail(test++);
}

void	memccpyvalidator()
{
	int		test;
	char	*src;
	char	dest[50];
	char	destbis[50];

	test = 1;
	printf("\nTEST FT_MEMCCPY.C\n");
	src = "This is : my test.";
	ft_bzero(dest, 50);
	bzero(destbis, 50);
	ft_memccpy(dest, src, ':', 50);
	memccpy(destbis, src, ':', 50);
	if (strcmp(dest, destbis) == 0)
		success(test++);
	else
		fail(test++);
}

void	memmovevalidator(void)
{
	int		test;
	char	dest[] = "oldstring";
	char	destbis[] = "oldstring";
	char	src[] = "newstring";
	char	str1[60] = "The quick brown fox jumps over the lazy dog";
	char	str2[60] = "The quick brown fox jumps over the lazy dog";

	test = 1;
	printf("\nTEST FT_MEMMOVE.C\n");
	ft_memmove(dest, src, 9);
	memmove(destbis, src, 9);
	if (strcmp(dest, destbis) == 0)
		success(test++);
	else
		fail(test++);
	ft_memmove(str1 + 10, str1 + 4, 40);
	memmove(str2 + 10, str2 + 4, 40);
	if (strcmp(str1, str2) == 0)
		success(test++);
	else
		fail(test++);
}

int		main(void)
{
	memsetvalidator();
	bzerovalidator();
	memcpyvalidator();
	memccpyvalidator();
	memmovevalidator();
	return (0);
}
