/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:31:25 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:32:48 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

size_t ft_strlcat(char *dest, const char *restrict src, size_t dsize)
{
	size_t dest_len;
	size_t src_len;
	size_t i;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dsize <= dest_len)
		return src_len + dsize;
	i = 0;
	while (src[i] && (dest_len + i + 1) < dsize)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}	

