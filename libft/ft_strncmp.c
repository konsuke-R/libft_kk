/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:31:52 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:32:41 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_strncmp(const char *str1,const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return 0;
	while (str1[i] && str2[i] && i < n - 1 && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int main(void)
// {
// 	char *str1;
// 	char *str2;
// 	int ans;

// 	str1 = "abcd";
// 	str2 = "abcf";
// 	ans = ft_strncmp(str1,str2,0);
// 	printf("%d\n",ans);
// 	return (0);
// }
