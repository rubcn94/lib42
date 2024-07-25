/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:06 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/25 16:06:01 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*p1;
	const char	*p2;
	size_t		remaining;

	if (!big)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		p1 = big;
		p2 = little;
		remaining = len;
		while (*p2 && *p1 == *p2 && remaining > 0)
		{
			p1++;
			p2++;
			remaining--;
		}
		if (*p2 == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
