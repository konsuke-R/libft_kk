#include <unistd.h>
#include <stdio.h>

int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	       return (1);
	return (0);
}

int main(void)
{
	char *c;

	c = "a";
	if (isalpha(*c) == 1)
		printf("it is alphabet\n");
	else
		printf("not alphabet\n");
	return (0);
}
