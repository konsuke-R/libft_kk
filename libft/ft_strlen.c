/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:31:35 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:32:44 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

// int main(void)
// {
// 	const char *s;
// 	size_t ans;

// 	s = "abcdeaaa";
// 	ans = ft_strlen(s);
// 	printf("%ld\n",ans);
// 	return (0);
// }
