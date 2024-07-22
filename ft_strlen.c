/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:27 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:57:28 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
	{
	i++;
	}
return (i);
}

int	main(void)
{
	printf("%zu\n", ft_strlen("caca"));
	return (0);
}
