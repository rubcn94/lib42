/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:57 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:57:58 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_putchar_fd(char *c, int fd);

void ft_putstr_fd(char *str, int fd)
{
	if(str == NULL)
		return;

	while(*str)
	{
		ft_putchar_fd(str, fd);
	str++;
	}
}
