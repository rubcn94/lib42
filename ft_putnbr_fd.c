/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:20 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/22 11:44:39 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description:
**   The ft_putnbr_fd function outputs an integer to a specified file descriptor (fd).
**   It handles both positive and negative integers, including the special case of
**   the most negative integer (-2147483648). The function recursively divides the
**   integer by 10 to extract and print each digit, ensuring correct output order
**   from most significant to least significant digit. For negative integers, it
**   prints a minus sign ('-') before handling the absolute value.
**
** Descripción:
**   La función ft_putnbr_fd imprime un número entero en un descriptor de archivo
**   especificado (fd). Maneja tanto números positivos como negativos, incluyendo
**   el caso especial del número más negativo (-2147483648). La función realiza
**   una división recursiva del entero por 10 para extraer e imprimir cada dígito,
**   asegurando un orden correcto de salida desde el dígito más significativo hasta
**   el menos significativo. Para números negativos, imprime un signo menos ('-')
**   antes de manejar el valor absoluto.
*/
#include <unistd.h> 

void ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
    {
        write(fd, "0", 1); 
        return;
    }

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11); 
        return;
    }

    if (n < 0)
    {
        write(fd, "-", 1); 
        n = -n; 
    }

    char buffer[12]; 
    int i;
    
	i = 0;
    while (n > 0)
    {
        buffer[i++] = n % 10 + '0'; 
        n /= 10; 
    }

    while (i > 0)
    {
        write(fd, &buffer[--i], 1); 
    }
}
