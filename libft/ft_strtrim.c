/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:32:04 by kkono             #+#    #+#             */
/*   Updated: 2025/04/30 07:02:21 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_inset(char s1, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	int first;
	int last;
	int i;
	char *str_trimmed;

	if (!s1||!set)
		return (NULL);
	i = 0;
	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] && is_inset(s1[first], set))
		first++;
	while (last > first && is_inset(s1[last], set))
		last--;
	str_trimmed = (char *)malloc(sizeof(char) * (last - first + 2));
	if (!str_trimmed)
		return (NULL);
	while (last >= first)
		str_trimmed[i++] = s1[first++];
	str_trimmed[i] = '\0';
	return (str_trimmed);
}

int is_inset(char s1, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char *ans;
// 	char const *s1 = "   xxxtripouille";
// 	char const *set = " x";
// 	ans = ft_strtrim(s1,set);
// 	printf("%s\n", ans);
// 	free(ans);
// 	return (0);
// }