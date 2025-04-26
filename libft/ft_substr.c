/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:32:09 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:32:33 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t s_len;
	size_t j;

	s_len = 0;
	j = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (!substr)
			return NULL;
		substr[0] = '\0';
		return substr;
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return NULL;
	while (j < len)
	{
		substr[j] = s[start + j];
		j++;
	}
	substr[j] = '\0';
	return substr;
}
