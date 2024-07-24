/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:49:19 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 14:24:14 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*result;
	char	ch;

	ch = (char)c;
	result = NULL;
	while (*str)
	{
		if (*str == ch)
		{
			result = (char *)str;
		}
		str++;
	}
	if (ch == '\0')
	{
		return ((char *)str);
	}
	return (result);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

void single_test_strrchr(const char *str, int ch) {
    char *res = ft_strrchr(str, ch);
    if (res) {
        printf("Última ocurrencia de '%c': %s\n", ch, res);
    } else {
        printf("Carácter no encontrado.\n");
    }
}

int main() {
    single_test_strrchr("Hola mundo, mundo", 'm'); // Debe imprimir: "mundo"
    single_test_strrchr("Hola mundo, mundo", 'z'); 
    single_test_strrchr("Hola mundo, mundo", '\0');
    single_test_strrchr("bonjourno", 'o');
    single_test_strrchr("", '\0');
    single_test_strrchr("teste", 'e');
    single_test_strrchr("teste", 101);
    single_test_strrchr("teste", 0);

    return 0;
}*/
