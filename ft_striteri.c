#include <stdio.h>
#include <stddef.h> // Para size_t

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    if (s == NULL || f == NULL)
        return;

    unsigned int i;
    i = 0;
    
    while (*s)
    {
        f(i, s);
        
        s++;
        i++;
    }
}

