#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;

    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
	
    return (i);
}

int main()
{
    char src[] = "Hello, World!";
    char dst[50];

    // Utilizamos ft_strlcpy para copiar src en dst
    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Fuente: %s\n", src);
    printf("Destino: %s\n", dst);
    printf("Longitud copiada: %zu\n", len);

    return 0;
}

