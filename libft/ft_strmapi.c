#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	unsigned int length;
	char *str;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	str = malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = (*f)(i, s[i]);
	        i++;
	}
	str[i] = '\n';
	return str;
}
