#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t s_len;
	int sta;
	int j;

	s_len = 0;
	j = 0;
	sta = start;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (char *)malloc(1);
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return NULL;
	while (j < len)
	{
		substr[j] = s[start + j];
		j++;
	}
	substr[j] = '\0';
	return substr;
}
