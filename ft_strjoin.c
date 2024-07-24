/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:36:56 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 04:48:05 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);

char	*ft_strjoin (const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	result_len;
	char	*result;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else
	{
	len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
	}
	result_len = len1 + len2 + 1;
	result = (char *)malloc(sizeof(char) * result_len);
	if (result == NULL)
		return (NULL);
	 
	if (s1 != NULL && s2 != NULL)
	{
		ft_strlcpy(result, s1, result_len);
		ft_strlcat(result, s2, result_len);
	}
    return (result);  
}
