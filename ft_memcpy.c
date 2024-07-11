#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dest = (unsigned char *)dst;
    const char *source = (const char *)src;

    while (n--)
    {
        *dest++ = *source++;    
    }
    
        return (dest);
    }
