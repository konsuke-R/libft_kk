#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *str,int c)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == (char)c)
			return (char *)(str + i);
		if (str[i] == '\0')
			break;
		i++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	char *ans;
	int num;
	if (ac != 2)
		return (0);

	ans = ft_strchr(av[1], 'a');
	num = ans - &av[1][0] + 1;
	printf("最初に文字「a」があらわれる場所は%d文字目です\n",num);
	return (0);
}
