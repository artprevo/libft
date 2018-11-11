/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:49:05 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/09 15:57:11 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && haystack[i] && needle[j])
		{
			if ((needle[j]) == '\0')
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
