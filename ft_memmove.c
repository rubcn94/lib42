#include <stddef.h>


void *ft_memmove(void *dst, const void *src, size_t len)
{

    unsigned char *dest = (unsigned char *)dst;
    const unsigned char *source = (const unsigned char *)src;

    if (dest == source || len == 0)
        return dest;

    if (dest < source)
        while(len--)
            *dest++ = *source++;

    else
    {
        dest += len;
        source += len;
        while(len--)
            *(--dest) = *(--source);
            }
            return (dst);
}
