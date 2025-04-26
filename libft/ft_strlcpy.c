/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:31:29 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:32:46 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

size_t ft_strlcpy(char *dest, const char *restrict src, size_t dsize)
{
	size_t i;
	size_t size_s;

	size_s = ft_strlen(src);
	i = 0;
	if (dsize == 0)
		return (size_s);
	if (size_s < dsize)
	{
		while (i < size_s)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < dsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return size_s;
}

