#include <unistd.h>
#include <stdio.h>

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int main(void)
{
	char *c1;
	char *c2;

	c1 = "a";
	c2 = "1";

	if (ft_isalnum(c1) == 1)
		printf("isalnum\n");
	if (ft_isalnum(c2) == 1)
		printf("isalnum\n");
	else
		printf("not isalnum\n");
	return (0);
}

