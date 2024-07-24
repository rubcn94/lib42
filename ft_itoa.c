/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:40:27 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 06:50:28 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h> 

static int	num_length(int n)
{
	int	length;

	length = 0;
	if (n == INT_MIN)
	{
		length = 11;
		return (length);
	}
	if (n < 0)
	{
		length = 1;
		n = -n;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static int	num_length(int n);

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = num_length(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == INT_MIN)
	{
		str[--len] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (len == 0)
		str[0] = '0';
	return (str);
}
