/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:29:24 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:29:28 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
// 	char *c;

// 	c = "\n";

// 	if (ft_isascii(*c))
// 		printf("isascii\n");
// 	else
// 		printf("not isascii\n");
// 	return (0);
// }
