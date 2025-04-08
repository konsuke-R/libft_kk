#include <unistd.h>
#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}

int main(void)
{
	char c;
	int ans;
	
	c = 'c';
	printf("%c\n", c);
	ans = ft_toupper(c);
	printf("%c\n",ans);
	return (0);
}

