void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	if (!s)
		return NULL;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
