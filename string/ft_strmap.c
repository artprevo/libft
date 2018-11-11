/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:33:41 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/09 17:38:06 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int 	i;

	if (s && f)
	{
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s))))
			return (0);
		while (s != NULL && str[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
