/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:43 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:57:43 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char *ft_strchr(const char *s, int c)
{
	char ch = (char)c;

	while(*s)
	{
		if(*s == ch)
			return (char *)s;
		s++;
	}
	return (NULL);
}
