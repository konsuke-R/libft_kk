/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:29:13 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:29:13 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char *c1;
// 	char *c2;

// 	c1 = "a";
// 	c2 = "1";

// 	if (ft_isalnum(*c1) == 1)
// 		printf("isalnum\n");
// 	if (ft_isalnum(*c2) == 1)
// 		printf("isalnum\n");
// 	else
// 		printf("not isalnum\n");
// 	return (0);
// }

