/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:54:38 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:54:40 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //include size

void *ft_memset(void *s, int c, size_t n);

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n); // Usar memset para establecer los bytes a 0
}
