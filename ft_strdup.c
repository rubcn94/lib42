/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:39 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 07:37:46 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_strcpy(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	return ;
}

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(src);
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
/*
int main() {
    const char *original = "Hola, mundo!";
    char *duplicada = ft_strdup(original);

    if (duplicada != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicada);
        free(duplicada);
    } else {
        printf("Error: No se pudo duplicar la cadena.\n");
    }

    return 0;
}*/
