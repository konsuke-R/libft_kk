/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:31:19 by kkono             #+#    #+#             */
/*   Updated: 2025/04/28 13:21:18 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		all_strlen(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		str_len;
	int		cnt1;
	int		cnt2;

	str_len = all_strlen(s1, s2);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	cnt1 = 0;
	cnt2 = 0;
	while (s1[cnt1])
	{
		str[cnt1] = s1[cnt1];
		cnt1++;
	}
	while (s2[cnt2])
	{
		str[cnt1 + cnt2] = s2[cnt2];
		cnt2++;
	}
	str[cnt1 + cnt2] = '\0';
	return (str);
}

int	all_strlen(char const *s1, char const *s2)
{
	int	s1_len;
	int	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	return (s1_len + s2_len);
}
