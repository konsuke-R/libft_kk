#include <unistd.h>
#include <stdio.h>

int ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		c += 32;
	return c;
}

int main(void)
{
	char c;
	int ans;
	c = 'A';
	printf("%c\n",c);
	ans = ft_tolower(c);
	printf("%c\n", ans);
	return (0);
}
