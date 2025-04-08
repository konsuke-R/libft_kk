#include <unistd.h>
#include <stdio.h>

int isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int main(void)
{
	char *c;

	c = "9";
	if (isdigit(*c) == 1)
		printf("digit\n");
	else
		printf("non digit\n");
	return (0);
}

