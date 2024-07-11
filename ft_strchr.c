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
