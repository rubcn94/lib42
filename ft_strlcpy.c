/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:30 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 22:26:52 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size < 1)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main()
{
    char src[] = "Hello, World!";
    char dst[50];

    // Utilizamos ft_strlcpy para copiar src en dst
    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Fuente: %s\n", src);
    printf("Destino: %s\n", dst);
    printf("Longitud copiada: %zu\n", len);

    return 0;
}
*/
