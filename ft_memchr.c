#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = (const unsigned char *)s;
	unsigned char target = (unsigned char)c;

	while(n--)
	{
		if(*ptr == target)
			return (void *)ptr;
	ptr++;
	
	}
	return NULL;
}
