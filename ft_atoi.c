#include <stdio.h>

int ft_atoi(const char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r' ))
		str++;

	if(*str == '-')
	{
		sign = -1;
		str++;
	}

	if(*str == '+')
	{
		sign = 1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return sign * result;
}
