/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:06 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:57:14 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);

char *ft_strnstr(const char *big, const char *little, size_t len) 
{
	size_t little_len = sizeof(little);

	if(little_len == 0)
		return NULL;

	while(*big != 0 && len >= little_len)
	{
		if(*big == *little && ft_strncmp(big, little, little_len) == 0)
			return (char *)big;
		big++;
		len--;
	}
	return NULL;
}
