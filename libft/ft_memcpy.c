/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:30:07 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:30:08 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUF_SIZE 16

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		c1[i] = c2[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char buf1[BUF_SIZE];
// 	char buf2[BUF_SIZE];

// 	memset(buf1, '\0', BUF_SIZE);
// 	memset(buf2, '\0', BUF_SIZE);

// 	memset(buf1, 'b', 4);
// 	memset(buf1, 'a', 2);

// 	printf("コピー前\n");
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);

// 	ft_memcpy(buf2,buf1,3);

// 	printf("コピー後\n");
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);

// 	return (0);
// }
