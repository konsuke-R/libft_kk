/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:29:18 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:29:19 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	       return (1);
	return (0);
}

// int main(void)
// {
// 	char *c;

// 	c = "a";
// 	if (ft_isalpha(*c) == 1)
// 		printf("it is alphabet\n");
// 	else
// 		printf("not alphabet\n");
// 	return (0);
// }
