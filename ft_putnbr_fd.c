/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:06:20 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/24 07:04:00 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	i = 0;
	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
		write(fd, &buffer[--i], 1);
}
