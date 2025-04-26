/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 02:49:07 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 10:36:23 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

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
		       sign  = -1;
		nptr++;
	}
	
	while (*nptr >= '0' && *nptr <= '9')
	{
		ans = ans * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * ans);
}	

// int main(void)
// {
// 	char *ptr1;
// 	char *ptr2;
// 	char *ptr3;
// 	int ans1;
// 	int ans2;
// 	int ans3;
	
// 	ptr1 = "  \f\n\r\t\v++0011aa";
// 	ptr2 = "  --++-9203k--";
// 	ptr3 = "----++aa";

// 	ans1 = ft_atoi(ptr1);
// 	ans2 = ft_atoi(ptr2);
// 	ans3 = ft_atoi(ptr3);

// 	printf("ptr1 : %d\n",ans1);
// 	printf("ptr2 : %d\n",ans2);
// 	printf("ptr3 : %d\n",ans3);

// 	return 0;
// }
	
