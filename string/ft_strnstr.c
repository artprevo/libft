/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:55:45 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/09 15:58:07 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && haystack[i] && needle[j] \
			&& j < len)
		{
			if ((needle[j]) == '\0' || (j = (len - 1)))
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
