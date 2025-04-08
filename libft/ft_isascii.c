#include <unistd.h>
#include <stdio.h>

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int main(void)
{
	char *c;

	c = "\n";

	if (ft_isascii(*c))
		printf("isascii\n");
	else
		printf("not isascii\n");
	return (0);
}
