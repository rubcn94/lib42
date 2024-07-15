#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

void *ft_calloc(size_t num_elements, size_t element_size) 
{
	size_t total_size;
	void *ptr;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);

	if(ptr == NULL)
		return NULL;

	memset(ptr, 0, total_size);

	return (ptr);

}
