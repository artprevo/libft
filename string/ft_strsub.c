/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:47:51 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/11 18:10:28 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (*s && ((len && (size_t)start) < ft_strlen(s)))
	{
		if (!(str = (char *)malloc(sizeof(char) * len)))
			return (0);
		while (i < start)
			i++;
		i = 0;
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		return (str);
	}
	return (0);
}
