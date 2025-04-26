/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkono <kkono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:29:32 by kkono             #+#    #+#             */
/*   Updated: 2025/04/26 09:29:33 by kkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main(void)
// {
// 	char *c;

// 	c = "9";
// 	if (ft_isdigit(*c) == 1)
// 		printf("digit\n");
// 	else
// 		printf("non digit\n");
// 	return (0);
// }
