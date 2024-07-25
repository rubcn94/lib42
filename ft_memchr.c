/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:56:28 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/25 08:17:50 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{

	unsigned char		target;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*ptr == target)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void) 
{
    char str1[] = "Hola, mundo!";
    char *result = ft_memchr(str1, 'o', strlen(str1));
    printf("Test 1: %s\n", result);

    char str2[] = "Hola\0, mundo!";
    result = ft_memchr(str2, '\0', strlen(str2));
    printf("Test 2: %s\n", result);

    char str3[] = "";
    result = ft_memchr(str3, 'a', strlen(str3));
    printf("Test 3: %p\n", result);

    result = ft_memchr(str1, 'z', strlen(str1));
    printf("Test 4: %p\n", result);

    int *block = malloc(sizeof(int) * 5);
    block[0] = 1;
    block[1] = 2;
    block[2] = 3;
    block[3] = 4;
    block[4] = 5;
    result = ft_memchr(block, 3, sizeof(int) * 5);
    printf("Test 5: %p\n", result);

    result = ft_memchr(block, 3, 0);
    printf("Test 6: %p\n", result);

    free(block);
    return 0;
}*/
