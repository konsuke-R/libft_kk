#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *str1, char *str2, int n)
{
	int i;

	i = 0;
	while (str1[i] && str2[i] && i < n - 1 && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int main(void)
{
	char *str1;
	char *str2;
	int ans;

	str1 = "abcd";
	str2 = "abcf";
	ans = ft_strncmp(str1,str2,0);
	printf("%d\n",ans);
	return (0);
}
