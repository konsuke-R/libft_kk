#include <stdlib.h>

int get_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char *put_chars(char *s, unsigned int nb, int len)
{
	while (nb > 0)
	{
		s[len--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return s;
}

char *ft_itoa(int n)
{
	char *s;
	int len;
	unsigned int nb;

	len = get_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return s;
	}
	if (n < 0)
	{
		nb = (unsigned int)(-n);
		s[0] = '-';
	}
	else
		nb = n;
	put_chars(s, nb, len);
	return (s);
}
