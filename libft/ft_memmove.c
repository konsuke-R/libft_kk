#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 16

void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s1;
	const unsigned char *s2;

	if (dest <= src)
	{
		s1 = (unsigned char *)dest;
		s2 = (const unsigned char *)src;

		while (n--)
			*s1++ = *s2++;
	}
	else
	{
		s1 = (unsigned char *)dest;
		s1 += n;
		s2 = (const unsigned char *)src;
		s2 += n;
		while (n--)
			*--s1 = *--s2;
	}
	return dest;
}


