#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	int s1_len;
	int s2_len;
	int cnt1;
	int cnt2;

	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return NULL;
	cnt1 = 0;
	cnt2 = 0;
	while (s1[cnt1])
	{
		str[cnt1] = s1[cnt1];
		cnt1++;
	}
	while (s2[cnt2])
	{
		str[cnt1+cnt2] = s2[cnt2];
		cnt2++;
	}
	str[cnt1+cnt2] = '\0';
	return str;
}

