#include <unistd.h>
#include <stdio.h>

int ft_isspace(char c)
{
	if (c == ' '|| c == '\f'||c == '\n'|| c == '\r'|| c== '\t'|| c== '\v')
		return (1);
	return (0);
}

int ft_atoi(const char *nptr)
{
	int sign;
	int ans;

	sign = 1;
	ans  = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		       sign  = -sign;
		nptr++;
	}
	
	while (*nptr >= '0' && *nptr <= '9')
	{
		ans = ans * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * ans);
}	

