/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:29:02 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:29:03 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *c;
	size_t i;

	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
	return ;
}

// int main(void)
// {
// 	size_t size = 10;
// 	unsigned char buf1[10] = "abcdefghij";
// 	unsigned char buf2[10] = "abcdefghij";

// 	bzero(buf1,size);
// 	ft_bzero(buf2,size);

// 	if (memcmp(buf1, buf2, size) == 0)
// 		printf("success\n");
// 	else
// 		printf("fail\n");

// 	return (0);
// }
