#include <unistd.h>
#include <stdio.h>

size_t strlcpy(char *dest, const char *restrict src, size_t dsize)
{
	size_t i;
	size_t size_s;

	size_s = 0;
	while (src[size_s])
		size_s++;

	i = 0;
	if (size_s < dsize)
	{
		while (i < size_s)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < dsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return size_s;
}

