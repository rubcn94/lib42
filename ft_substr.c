#include <stddef.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);

void *ft_memcpy(void *dest, const void *src, size_t n);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	if(s == NULL || start >=ft_strlen(s)) //S NULL?
		return (NULL);

	if(len > ft_strlen(s) -start) //len long
	len = ft_strlen(s) -start;

	char *substr = (char *)malloc(len + 1); //*substr malloc
	if(substr == NULL)
	return (NULL);

	ft_memcpy(substr, s + start, len);

	return (substr);






}

