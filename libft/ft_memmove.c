/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:30:17 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:33:05 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

#define BUF_SIZE 16

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s1;
	const unsigned char *s2;

	if (dest <= src)
	{
		s1 = (unsigned char *)dest;
		s2 = (const unsigned char *)src;

		while (n--)
			*s1++ = *s2++;
	}
	else
	{
		s1 = (unsigned char *)dest;
		s1 += n;
		s2 = (const unsigned char *)src;
		s2 += n;
		while (n--)
			*--s1 = *--s2;
	}
	return dest;
}


