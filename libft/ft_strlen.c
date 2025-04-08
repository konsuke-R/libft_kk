#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return i;
}

int main(void)
{
	const char *s;
	size_t ans;

	s = "abcdeaaa";
	ans = ft_strlen(s);
	printf("%ld\n",ans);
	return (0);
}
