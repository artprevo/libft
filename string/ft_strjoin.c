/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:52:14 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/09 18:13:21 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	if (*s1 && *s2)
	{
		if (!(str = (char *)malloc(sizeof(char) * i)))
			return (0);
		i = 0;
		while (*s1)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
