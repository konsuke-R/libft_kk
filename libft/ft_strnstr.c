/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 03:34:24 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 08:38:29 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t len_s2;
    size_t i;

    i = 0;
    len_s2 = ft_strlen(s2);
    if (len_s2 == 0)
        return ((char *)s1);
    
    while (i + len_s2 <= len && s1[i])
    {
        if (ft_strncmp(&s1[i], s2, len_s2) == 0)
            return ((char *)&s1[i]);
        i++;
    }
    return NULL;
}