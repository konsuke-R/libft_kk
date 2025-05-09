/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:30:23 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:30:24 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUF_SIZE 16

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
// 	char buff1[BUF_SIZE];
// 	char buff2[BUF_SIZE];

// 	ft_memset(buff1, '\0', BUF_SIZE);
// 	ft_memset(buff2, '\0', BUF_SIZE);

// 	printf("初期化後の配列\n");
// 	printf("buff1:%s\n", buff1);
// 	printf("buff2:%s\n", buff2);

// 	ft_memset(buff1, 'a', 4);
// 	ft_memset(buff1, 'b', 2);
// 	ft_memset(buff2, 'c', 6);

// 	printf("配列を表示\n");
// 	printf("buff1:%s\n", buff1);
// 	printf("buff2:%s\n", buff2);

// 	return (0);
// }
