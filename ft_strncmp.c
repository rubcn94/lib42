#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(n-- >0)
		if(*s1 != *s2)
		{
			while(n-- >0 && *s1)
				if (*s1 != *s2)
					return *s1 - *s2;
			s1++;
			s2++;
			}
			return (0);
}
