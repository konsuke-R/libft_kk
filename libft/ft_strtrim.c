#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int set_check;
	int s1_start;
	int s1_last;
	char *strtrim;

	set_check = 0;
	s1_start = 0;
	s1_last = 0;

	while (s1[s1_last])
		s1_last++;
	while (set[set_check])
	{
		if (set[set_check] == s1[s1_start])
		{
			s1_start++;
			set_check = 0;
		}
		else
			set_check++;
	}
	set_check = 0;
	while (set[set_check])
	{
		if (set[set_check] == s1[s1_last])
		{
			s1_last++;
			set_check = 0;
		}
		else
			set_check++;
	}
	strtrim = (char *)malloc(sizeof(char) * (s1_last - s1_start + 1));
	if (!strtrim)
		return NULL;
	while (s1_start < s1_last)
	{
		strtrim[s1_start] = s1[s1_start];
		s1_start++;
	}
	return strtrim;
}

