#include <stdlib.h>
#include <stddef.h>

size_t ft_strlen(const char *s);

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	if(s == NULL || f == NULL)
		return (NULL);

	size_t len;
	char *result;
	
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));

	if (!result)
		return(NULL);

	size_t i = 0;
	while(i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';

	return (result);
}
	
