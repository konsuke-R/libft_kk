#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n);

void *ft_calloc(size_t nmemb, size_t size)
{
	void *mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return NULL;
	ft_memset(mem, 0, size*nmemb);
	return mem;
}
	


void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	ptr = (unsigned char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return s;
}

