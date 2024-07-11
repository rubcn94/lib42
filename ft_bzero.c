#include <stddef.h> //include size

void *ft_memset(void *s, int c, size_t n);

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n); // Usar memset para establecer los bytes a 0
}
