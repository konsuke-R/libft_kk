#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *sd;
	size_t i;
	size_t len;

	len = 0;
	while (s[len])
		len++;
	i = 0;
	sd = (char *)malloc(sizeof(char) * (len + 1));
	if (!sd)
		return NULL;
	while (i < len)
	{
		sd[i] = s[i];
		i++;
	}
	sd[i] = '\0';
	return sd;
}
