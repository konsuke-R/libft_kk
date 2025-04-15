#include <stdlib.h>

char **free_arg(char **str, int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (0);
}

int ft_ct_str(char const *s, char c)
{
	int i;
	int ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			ct++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (ct);
}

char *ft_putword(char *str, char const *s, int i, int word_len)
{
	int j;

	j = 0;
	while (word_len > 0)
	{
		str[j] = s[i - word_len];
		j++;
		word_len--;
	}
	str[j] = '\0';
	return (str);
}

char **ft_split_w(char const *s, char c, char **str, int ct_w)
{
	int i;
	int word;
	int word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < ct_w)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		str[word] = (char *)malloc(sizeof(char) * (word_len +  1));
		if (!str[word])
			return (free_arg(str, word));
		ft_putword(str[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	str[word] = 0;
	return (str);
}

char **ft_split(char const *s, char c)
{
	char **str;
	int ct_w;

	if (!s)
		return (0);
	
	ct_w = ft_ct_str(s,c);
	str = (char **)malloc(sizeof(char *) * (ct_w + 1));
	if (!str)
		return (0);
	str = ft_split_w(s, c, str, ct_w);
	return (str);
}

#include <stdio.h>

int main(void)
{
		char **result = ft_split("abc def  ghi", ' ');
			if (!result)
					{
								printf("ft_split failed\n");
										return (1);
											}

				for (int i = 0; result[i]; i++)
						{
									printf("result[%d] = \"%s\"\n", i, result[i]);
											free(result[i]);
												}
					free(result);
						return (0);
}
