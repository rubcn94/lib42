/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:56:28 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:56:31 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = (const unsigned char *)s;
	unsigned char target = (unsigned char)c;

	while(n--)
	{
		if(*ptr == target)
			return (void *)ptr;
	ptr++;
	
	}
	return NULL;
}
