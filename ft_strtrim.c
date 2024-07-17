#include <stdlib.h>
#include <stddef.h>

char *ft_strchr(const char *s, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dst_size);
int ft_strlen(const char *s);

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t end;
	size_t start;

	str = 0;
	if (s1!= 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while(s1[start] && ft_strchr(set, s1[start]))
			start++;
		while(s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc((end - start + 1) * sizeof(char));
		if(str)
		{
			ft_strlcpy(str, &s1[start], end - start + 1);
			str[end - start] = '\0';
		}
	}
	return (str);
}

