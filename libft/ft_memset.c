#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 16

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	ptr = (unsigned char *)s;
	size_t i;

	i = 0;

	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}

	return s;
}

int main(void)
{
	char buff1[BUF_SIZE];
	char buff2[BUF_SIZE];

	ft_memset(buff1, '\0', BUF_SIZE);
	ft_memset(buff2, '\0', BUF_SIZE);

	printf("初期化後の配列\n");
	printf("buff1:%s\n", buff1);
	printf("buff2:%s\n", buff2);

	ft_memset(buff1, 'a', 4);
	ft_memset(buff1, 'b', 2);
	ft_memset(buff2, 'c', 6);

	printf("配列を表示\n");
	printf("buff1:%s\n", buff1);
	printf("buff2:%s\n", buff2);

	return (0);
}
