/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:56:48 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:56:50 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h> //to use size

/*
int main(void)
{
    char a[50] = "1234567890123456789";
    printf("antes:\t\t%s\n", a);
    ft_memset(a, '0', 5);
    printf("despues:\t%s\n", a);
    return 0;
}
*/
void *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *p = (unsigned char *)s;

    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }

    return s; // Devuelve el puntero al inicio del área de memoria modificada
}

