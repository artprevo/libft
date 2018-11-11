/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:56:40 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/11 17:59:28 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	while (n-- && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
	}
	if (n == 0)
		return (0);
	else
		return (*ptr1 - *ptr2);
}
