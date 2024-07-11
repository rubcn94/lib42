#include <stddef.h>

size_t ft_strlen(const char *s);

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t copy_len;
    size_t dst_len = ft_strlen(dst);  
    size_t src_len = ft_strlen(src);  
    size_t total_len = dst_len + src_len;  
    
	copy_len = 0;  

    if (size > dst_len)
    {
		    size_t i;
		    
        copy_len = size - dst_len - 1;  // Calcula cuántos caracteres se pueden copiar de `src` a `dst
        i = 0;  
        
        while (src[i] && i < copy_len)
        {
            dst[dst_len + i] = src[i]; 
            i++;  
        }
        dst[dst_len + i] = '\0'; 
    }

    return total_len;  
}
