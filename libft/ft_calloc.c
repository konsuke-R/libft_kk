/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:29:09 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:29:10 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void *ft_memset(void *s, int c, size_t n);

void *ft_calloc(size_t nmemb, size_t size)
{
	void *mem;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return NULL;
	mem = malloc(nmemb * size);
	if (!mem)
		return NULL;
	ft_memset(mem, 0, size*nmemb);
	return mem;
}
	


void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	ptr = (unsigned char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return s;
}

