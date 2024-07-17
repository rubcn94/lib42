/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:20 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/17 13:06:28 by rsierra-         ###   ########.fr       */
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


