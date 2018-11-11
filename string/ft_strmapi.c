/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:38:21 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/09 17:41:53 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s && f)
	{
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s))))
			return (0);
		while (str[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (0);
}
