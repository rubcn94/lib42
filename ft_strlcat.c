/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:33 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 22:50:39 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	if (!src)
		return (0);
	if (!dst)
	{
		if (dsize == 0)
			return (ft_strlen(src));
		else
			return (0);
	}
	i = 0;
	while (dst[i] && i < dsize)
		i++;
	if (i == dsize)
		return (dsize + ft_strlen(src));
	len = ft_strlcpy(dst + i, src, dsize - i);
	return (i + len);
}
